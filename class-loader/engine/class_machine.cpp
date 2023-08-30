//
// Created by Danil on 27.08.2023.
//

#include "class_machine.h"
#include "../class_file.h"
#include "../utility/class_constant_pool.h"
#include "../../vm/base/lvm.h"
#include "../field-method/interface.h"
#include "../constant-pool-types/constant_utf8_info.h"

abstract_data *class_machine::perform_analyzing(loader *loader) {
    auto* file = new class_file();
    auto* data = static_cast<class_metadata *>(class_mt_engine.perform_analyzing(loader));
    file->magic = data->reserved_jvm_numbers;
    file->minor_version = data->minor_version;
    file->major_version = data->major_version;
    auto* class_constant_pool = static_cast<class class_constant_pool*>(class_const_pool_engine.perform_analyzing(loader));
    file->constant_pool_count = class_constant_pool->constant_pool_length;
    file->constant_pool = class_constant_pool->constant_pool;
    this->class_attribute_engine.constant_pool = &file->constant_pool;
    this->class_method_engine.class_attribute_engine.constant_pool = &file->constant_pool;
    this->class_field_engine.class_attribute_engine.constant_pool = &file->constant_pool;
    auto* next_data = static_cast<class_metadata *>(class_mt_engine.perform_second_analyzing(loader));
    file->access_flags = next_data->access_flags;
    file->this_class = next_data->this_class;
    file->super_class = next_data->super_class;
    auto* interface_data = static_cast<interface*>(class_interface_engine.perform_analyzing(loader));
    file->interfaces_count = interface_data->interface_count;
    file->interfaces = interface_data->interface_indexes;
    file->fields_count = loader->init_u2();
    for (int i = 0; i < file->fields_count; ++i) {
        file->fields.push_back(*static_cast<field*>(class_field_engine.perform_analyzing(loader)));
    }
    file->methods_count = loader->init_u2();
    for (int i = 0; i < file->methods_count; ++i) {
        file->methods.push_back(*static_cast<methods*>(class_method_engine.perform_analyzing(loader)));
    }
    file->attributes_count = loader->init_u2();
    for (int i = 0; i < file->attributes_count; ++i) {
        file->attributes.push_back(static_cast<attribute*>(class_attribute_engine.perform_analyzing(loader)));
    }
    file->name = lvm::return_class_name(file->this_class,file);
    for (int i = 0; i < file->methods_count; ++i) {
        file->methods[i].name = *static_cast<constant_utf8_info*>(file->constant_pool[file->methods[i].name_index-1])->string;
    }
    for (int i = 0; i < file->fields_count; ++i) {
        file->fields[i].name = *static_cast<constant_utf8_info*>(file->constant_pool[file->fields[i].name_index-1])->string;
    }
    return file;
}


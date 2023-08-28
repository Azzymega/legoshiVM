//
// Created by Danil on 27.08.2023.
//

#include "class_machine.h"
#include "../class_file.h"
#include "../utility/class_constant_pool.h"

abstract_data *class_machine::perform_analyzing(loader *loader) {
    auto* file = new class_file();
    auto* data = static_cast<class_metadata *>(class_mt_engine.perform_analyzing(loader));
    file->magic = data->reserved_jvm_numbers;
    file->minor_version = data->minor_version;
    file->major_version = data->major_version;
    auto* class_constant_pool = static_cast<class class_constant_pool*>(class_const_pool_engine.perform_analyzing(loader));
    file->constant_pool_count = class_constant_pool->constant_pool_length;
    file->constant_pool = class_constant_pool->constant_pool;
    return file;
}


//
// Created by Danil on 30.08.2023.
//

#include "init_vm_pool_engine.h"
#include "../../../class-loader/constant-pool-types/constant_utf8_info.h"

vm_pool init_vm_pool_engine::init_pool(class_file file) {
    vm_pool pool;
    pool.access_flags = file.access_flags;
    init_base_info(&file, &pool);
    pool.class_name = *static_cast<constant_utf8_info*>(file.constant_pool[file.this_class])->string;
    /*for (int i = 0; i < file.constant_pool_count; ++i) {
        if (constant_method_ref_info *ref = dynamic_cast<constant_method_ref_info *>(file.constant_pool[i])){
            pool.method_refs[i+1] = ref;
        }
    }*/
    return pool;
}

void init_vm_pool_engine::init_base_info(class_file *file, vm_pool *pool) {
    for (int i = 0; i < file->methods_count; ++i) {
        pool->methods.push_back(init_method_engine::init_method(file->methods[i]));
    }
    for (int i = 0; i < file->interfaces_count; ++i) {
        pool->interfaces.push_back(file->interfaces[i]);
    }
    for (int i = 0; i < file->fields_count; ++i) {
        pool->fields.push_back(file->fields[i]);
    }
}

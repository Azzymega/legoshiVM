/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_INIT_VM_POOL_ENGINE_H
#define LEGOSHIVM_INIT_VM_POOL_ENGINE_H

#include "init_method_engine.h"
#include "vm_pool.h"
#include <typeinfo>
#include "../../../class-loader/constant-pool-types/constant_method_ref_info.h"

class init_vm_pool_engine {
public:
    vm_pool init_pool(class_file file);
    void init_base_info(class_file *file, vm_pool *pool);
};


#endif //LEGOSHIVM_INIT_VM_POOL_ENGINE_H

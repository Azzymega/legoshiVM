//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_CONSTANT_POOL_H
#define LEGOSHIVM_CLASS_CONSTANT_POOL_H


#include <vector>
#include "abstract_data.h"
#include "../../vm/base/def.h"
#include "../constant-pool-types/constant_pool_item.h"

class class_constant_pool : public abstract_data{
public:
    u2 constant_pool_length;
    std::vector<constant_pool_item*> constant_pool;
    void resolve_constant_pool_size(u2 size);
    void append_constant_pool_item(constant_pool_item* item);
};


#endif //LEGOSHIVM_CLASS_CONSTANT_POOL_H

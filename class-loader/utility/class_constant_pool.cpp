//
// Created by Danil on 27.08.2023.
//

#include "class_constant_pool.h"

void class_constant_pool::resolve_constant_pool_size(u2 size) {
    this->constant_pool_length = size;
}

void class_constant_pool::append_constant_pool_item(constant_pool_item *item) {
    this->constant_pool.push_back(item);
}

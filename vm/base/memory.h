//
// Created by Danil on 29.08.2023.
//

#ifndef LEGOSHIVM_MEMORY_H
#define LEGOSHIVM_MEMORY_H


#include <vector>
#include "../../class-loader/constant-pool-types/constant_pool_item.h"
#include "../heap/heap_controller.h"
#include "../../class-loader/class_file.h"

class memory {
public:
    heap_controller heap;
    std::vector<class_file> assemblies;
};


#endif //LEGOSHIVM_MEMORY_H

/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
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

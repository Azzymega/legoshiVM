/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_HEAP_CONTROLLER_H
#define LEGOSHIVM_HEAP_CONTROLLER_H

#include <typeinfo>
#include <vector>
#include "../type-system/basic_primitive_type.h"

class heap_controller {
private:
    std::vector<basic_primitive_type*> allocation_place;
public:
    void allocate(basic_primitive_type* type);
};


#endif //LEGOSHIVM_HEAP_CONTROLLER_H

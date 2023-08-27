//
// Created by Danil on 27.08.2023.
//

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

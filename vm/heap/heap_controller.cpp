//
// Created by Danil on 27.08.2023.
//

#include "heap_controller.h"

void heap_controller::allocate(basic_primitive_type *type) {
    this->allocation_place.push_back(type);
}

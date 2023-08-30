/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#include "heap_controller.h"

void heap_controller::allocate(basic_primitive_type *type) {
    this->allocation_place.push_back(type);
}

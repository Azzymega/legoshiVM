/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#include "constant_value.h"

void constant_value::resolve_value_index(u2 data) {
    this->const_value_index = data;
}

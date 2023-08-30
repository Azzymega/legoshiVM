/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */


#include "attribute.h"

void attribute::resolve_name(u2 data) {
    this->attribute_name = data;
}

void attribute::resolve_length(u4 data) {
    this->attribute_length = data;
}

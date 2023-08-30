/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_BYTE_H
#define LEGOSHIVM_BYTE_H


#include "../../basic_primitive_type.h"
#include "../../../base/def.h"

class byte_t : public basic_primitive_type {
    u1 data;
};


#endif //LEGOSHIVM_BYTE_H

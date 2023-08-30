/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/

#ifndef LEGOSHIVM_INT_H
#define LEGOSHIVM_INT_H


#include "../../basic_primitive_type.h"
#include "../../../base/def.h"

class int_t : public basic_primitive_type {
protected:
    u4 data;
};


#endif //LEGOSHIVM_INT_H

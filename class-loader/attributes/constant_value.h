/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_CONSTANT_VALUE_H
#define LEGOSHIVM_CONSTANT_VALUE_H


#include "attribute.h"

class constant_value : public attribute {
protected:
    u2 const_value_index;
public:
    void resolve_value_index(u2 data);
};


#endif //LEGOSHIVM_CONSTANT_VALUE_H

//
// Created by Danil on 27.08.2023.
//

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

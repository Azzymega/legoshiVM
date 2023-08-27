//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_FIELD_H
#define LEGOSHIVM_FIELD_H


#include "../../vm/base/def.h"

class field {
public:
    u2 access_flags;
    u2 name_index;
    u2 signature_index;
    u2 attributes_count;
};


#endif //LEGOSHIVM_FIELD_H

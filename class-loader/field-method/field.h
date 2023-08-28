//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_FIELD_H
#define LEGOSHIVM_FIELD_H


#include <vector>
#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"
#include "../attributes/attribute.h"

class field : public abstract_data {
public:
    u2 access_flags;
    u2 name_index;
    u2 signature_index;
    u2 attributes_count;
    std::vector<attribute*> attributes;
};


#endif //LEGOSHIVM_FIELD_H

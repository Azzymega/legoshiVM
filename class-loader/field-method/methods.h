//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_METHODS_H
#define LEGOSHIVM_METHODS_H


#include <vector>
#include "../../vm/base/def.h"
#include "../attributes/attribute.h"

class methods {
    u2 access_flags;
    u2 name_index;
    u2 signature_index;
    u2 attributes_count;
    std::vector<attribute*> attributes;
};


#endif //LEGOSHIVM_METHODS_H

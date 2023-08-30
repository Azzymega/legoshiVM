/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#ifndef LEGOSHIVM_FIELD_H
#define LEGOSHIVM_FIELD_H


#include <vector>
#include <string>
#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"
#include "../attributes/attribute.h"

class field : public abstract_data {
public:
    std::string name;
    u2 access_flags;
    u2 name_index;
    u2 signature_index;
    u2 attributes_count;
    std::vector<attribute*> attributes;
};


#endif //LEGOSHIVM_FIELD_H

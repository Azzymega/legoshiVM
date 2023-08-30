//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_INTERFACE_H
#define LEGOSHIVM_INTERFACE_H


#include <vector>
#include <string>
#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"

class interface : public abstract_data {
public:
    u2 interface_count;
    std::vector<u2> interface_indexes;
};


#endif //LEGOSHIVM_INTERFACE_H

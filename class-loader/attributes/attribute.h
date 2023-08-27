//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_ATTRIBUTE_H
#define LEGOSHIVM_ATTRIBUTE_H


#include <vector>
#include "../../vm/base/def.h"

class attribute {
protected:
    u2 attribute_name;
    u4 attribute_length;
private:
    std::vector<u1> info;
};


#endif //LEGOSHIVM_ATTRIBUTE_H

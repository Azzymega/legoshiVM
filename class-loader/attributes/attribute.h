//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_ATTRIBUTE_H
#define LEGOSHIVM_ATTRIBUTE_H


#include <vector>
#include "../../vm/base/def.h"
#include "../utility/abstract_data.h"

class attribute : public abstract_data {
protected:
    u2 attribute_name;
    u4 attribute_length;
private:
    std::vector<u1> info;
public:
    void resolve_name(u2 data);
    void resolve_length(u4 data);
};


#endif //LEGOSHIVM_ATTRIBUTE_H

//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_METHOD_H
#define LEGOSHIVM_METHOD_H


#include <vector>
#include <stack>
#include "../../type-system/basic_primitive_type.h"

class method {
private:
    std::vector<basic_primitive_type*> vars;
    std::stack<basic_primitive_type*> operands;
    // frame
};


#endif //LEGOSHIVM_METHOD_H

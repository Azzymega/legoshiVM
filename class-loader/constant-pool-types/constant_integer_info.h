//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_INTEGER_INFO_H
#define JET_CONSTANT_INTEGER_INFO_H

#include "../../vm/base/def.h"
#include "constant_pool_item.h"

struct constant_integer_info : public constant_pool_item {
public:
    u4 bytes;
};
#endif //JET_CONSTANT_INTEGER_INFO_H

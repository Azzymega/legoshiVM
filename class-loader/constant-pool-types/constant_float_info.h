//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_FLOAT_INFO_H
#define JET_CONSTANT_FLOAT_INFO_H


#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_float_info : public constant_pool_item {
    u4 bytes;
};
#endif //JET_CONSTANT_FLOAT_INFO_H

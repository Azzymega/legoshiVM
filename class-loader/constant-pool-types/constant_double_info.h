//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_DOUBLE_INFO_H
#define JET_CONSTANT_DOUBLE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_double_info : public constant_pool_item {
    u4 high_bytes;
    u4 low_bytes;
};

#endif //JET_CONSTANT_DOUBLE_INFO_H

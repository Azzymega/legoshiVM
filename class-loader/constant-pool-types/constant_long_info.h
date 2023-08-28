//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_LONG_INFO_H
#define JET_CONSTANT_LONG_INFO_H

#include "../../vm/base/def.h"
#include "constant_pool_item.h"

class constant_long_info : public constant_pool_item {
public:
    u4 high_bytes;
    u4 low_bytes;
};

#endif //JET_CONSTANT_LONG_INFO_H

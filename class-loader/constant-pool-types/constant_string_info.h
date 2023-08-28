//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_STRING_INFO_H
#define JET_CONSTANT_STRING_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_string_info : public constant_pool_item {
public:
    u2 string_index;
};
#endif //JET_CONSTANT_STRING_INFO_H

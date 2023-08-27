//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_METHOD_HANDLE_INFO_H
#define JET_CONSTANT_METHOD_HANDLE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_method_handle_info : public constant_pool_item {
    u1 reference_kind;
    u2 reference_index;
};

#endif //JET_CONSTANT_METHOD_HANDLE_INFO_H

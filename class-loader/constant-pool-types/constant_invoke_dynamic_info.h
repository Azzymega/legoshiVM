//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_INVOKE_DYNAMIC_INFO_H
#define JET_CONSTANT_INVOKE_DYNAMIC_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_invoke_dynamic_info : public constant_pool_item {
    u2 bootstrap_method_attr_index;
    u2 name_and_type_index;
};

#endif //JET_CONSTANT_INVOKE_DYNAMIC_INFO_H

//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_INTERFACE_METHOD_REF_INFO_H
#define JET_CONSTANT_INTERFACE_METHOD_REF_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_interface_method_ref_info : public constant_pool_item {
public:
    u2 class_index;
    u2 name_and_type_index;
};
#endif //JET_CONSTANT_INTERFACE_METHOD_REF_INFO_H

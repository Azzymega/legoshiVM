//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_NAME_AND_TYPE_INFO_H
#define JET_CONSTANT_NAME_AND_TYPE_INFO_H

#include "constant_pool_item.h"
#include "../../vm/base/def.h"

class constant_name_and_type_info : public constant_pool_item {
    u2 name_index;
    u2 descriptor_index;
};

#endif //JET_CONSTANT_NAME_AND_TYPE_INFO_H

//
// Created by Danil on 26.08.2023.
//

#ifndef JET_CONSTANT_CLASS_INFO_H
#define JET_CONSTANT_CLASS_INFO_H


#include "../../vm/base/def.h"
#include "constant_pool_item.h"

class constant_class_info : public constant_pool_item {
public:
    u2 name_index;
};

#endif //JET_CONSTANT_CLASS_INFO_H

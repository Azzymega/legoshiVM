//
// Created by Danil on 29.08.2023.
//

#ifndef LEGOSHIVM_LOAD_LVM_FRAMES_H
#define LEGOSHIVM_LOAD_LVM_FRAMES_H


#include "../../../class-loader/field-method/methods.h"
#include "../vm-types/method.h"

class load_lvm_frames {
public:
    method produce_frame(const methods& raw_method);
};


#endif //LEGOSHIVM_LOAD_LVM_FRAMES_H

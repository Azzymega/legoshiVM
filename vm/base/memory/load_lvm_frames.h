/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_LOAD_LVM_FRAMES_H
#define LEGOSHIVM_LOAD_LVM_FRAMES_H


#include "../../../class-loader/field-method/methods.h"
#include "../vm-types/method.h"

class load_lvm_frames {
public:
    method produce_frame(const methods& raw_method);
};


#endif //LEGOSHIVM_LOAD_LVM_FRAMES_H

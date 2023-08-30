/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_INIT_LVM_H
#define LEGOSHIVM_INIT_LVM_H


#include "../lvm.h"

class init_lvm {
public:
    static lvm init_runtime(const class_file& file);
    static void dependency_inject(lvm* runtime, class_file file);
};


#endif //LEGOSHIVM_INIT_LVM_H

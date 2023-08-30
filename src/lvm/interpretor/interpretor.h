/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_INTERPRETOR_H
#define LEGOSHIVM_INTERPRETOR_H


#include "../../class-loader/attributes/code.h"
#include "../base/vm-types/method.h"
#include "../base/lvm.h"

class interpreter {
public:
    static void interpret(method *frame, thread *thread, lvm *runtime);
};


#endif //LEGOSHIVM_INTERPRETOR_H

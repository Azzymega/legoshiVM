//
// Created by Danil on 30.08.2023.
//

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

//
// Created by Danil on 29.08.2023.
//

#ifndef LEGOSHIVM_THREAD_H
#define LEGOSHIVM_THREAD_H


#include <stack>
#include "vm-types/method.h"

class thread {
public:
    std::stack<method> frame_stack;
    std::stack<u1> native_stack;
    u4 pc;
};


#endif //LEGOSHIVM_THREAD_H

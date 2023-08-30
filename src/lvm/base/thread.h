/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
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

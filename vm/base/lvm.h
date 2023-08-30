/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#ifndef LEGOSHIVM_LVM_H
#define LEGOSHIVM_LVM_H


#include <string>
#include "def.h"
#include "vm-types/method.h"
#include "../../class-loader/class_file.h"
#include "memory.h"
#include "thread.h"
#include "../../class-loader/io/loader.h"
#include "../../class-loader/engine/class_machine.h"

class lvm {
public:
    bool is_superclass_loaded;
    u4 thread_counter;
    loader ld;
    class_machine machine;
    memory memory_controller;
    std::stack<thread*> threads;
    static std::string return_class_name(u4 class_index, class_file *cplink);
    static method *methodref_check(u2 index, class_file *cplink, lvm *currrent_runtime);
    void init_first_thread();
};


#endif //LEGOSHIVM_LVM_H

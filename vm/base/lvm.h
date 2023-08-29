//
// Created by Danil on 27.08.2023.
//

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
    std::stack<thread> threads;
};


#endif //LEGOSHIVM_LVM_H

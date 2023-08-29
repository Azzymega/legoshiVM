//
// Created by Danil on 29.08.2023.
//

#include "init_lvm.h"

lvm init_lvm::init_runtime(const class_file& file) {
    lvm runtime = lvm();
    runtime.thread_counter = 0;
    runtime.memory_controller = memory();
    runtime.memory_controller.assemblies.push_back(file);
    return runtime;
}

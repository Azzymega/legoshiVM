/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#include <iostream>
#include "init_lvm.h"
#include "../../../class-loader/constant-pool-types/constant_utf8_info.h"

lvm init_lvm::init_runtime(const class_file& file) {
    lvm runtime = lvm();
    runtime.thread_counter = 0;
    runtime.memory_controller = memory();
    runtime.memory_controller.assemblies.push_back(file);
    //dependency_inject(&runtime, file);
    return runtime;
}

void init_lvm::dependency_inject(lvm *runtime, class_file file) { // переписать полностью этот ужас!!!
    /*for (int i = 0; i < file.constant_pool_count; ++i) {
        auto* path = dynamic_cast<constant_utf8_info*>(file.constant_pool[i]);
        if (path) {
            if (path->length >4 && path->string->at(4) == '/'){
                char x[] = {"java/lang/Object"};
                char s[path->string->size()+1];
                for (int j = 0; j < path->string->size(); ++j) {
                    s[j] = path->string->at(j);
                }
                s[path->string->size()] = '\000';
                bool right = true;
                for (int j = 0; j < path->string->size(); ++j) { // C++ костыль. Все операции сравнения просто отвалились, даже strcmp.
                    if (x[j] == s[j]){

                    }
                    else{
                        right = false;
                    }
                }
                if (right && runtime->is_superclass_loaded){
                    continue;
                }
                if (right){
                    runtime->is_superclass_loaded = true;
                }
                class_file filex = class_file();
                runtime->ld.load(*path->string+".class");
                filex = *static_cast<class_file*>(runtime->machine.perform_analyzing(&runtime->ld));
                runtime->memory_controller.assemblies.push_back(file);
                dependency_inject(runtime,filex);
                std::cout << "[LOADING] Loading additional " << *path->string << " dependency." << std::endl;
            }
     */  
}

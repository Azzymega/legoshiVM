#include <iostream>
#include "class-loader/io/loader.h"
#include "class-loader/engine/sub-engines/class_mt_engine.h"
#include "class-loader/class_file.h"
#include "class-loader/engine/class_machine.h"
#include "class-loader/constant-pool-types/constant_utf8_info.h"
#include "vm/base/lvm.h"
#include "vm/base/memory/init_lvm.h"
#include "vm/interpretor/interpretor.h"

int main(int argc, char* argv[])
{
    loader ld;
    std::cout << "LegoshiVM" << std::endl;
    if (argv[1] == nullptr){
        std::cout << "[ERROR] Class file is missing" << std::endl;
    }
    else {
        std::cout << "[LOADING] Initializing JVM" << std::endl;
        lvm main_runtime;
        for (int i = 1; i < argc; ++i) {
            ld.load(argv[i]);
            class_file file = class_file();
            class_machine machine = class_machine();
            file = *static_cast<class_file*>(machine.perform_analyzing(&ld));
            main_runtime.memory_controller.assemblies.push_back(file);
        }
        std::cout << "[LOADING] JVM initialized. Main class loaded." << std::endl;
        std::cout << "[LOADING] Loading additional classes." << std::endl;
        std::cout << "[LOADING] Initializing interpreter." << std::endl;
        main_runtime.init_first_thread();
        interpreter::interpret(&main_runtime.threads.top()->frame_stack.top(),main_runtime.threads.top(),&main_runtime);
    }
    std::cout << "[LOADING] Interpreter shutdown." << std::endl;
    std::cout << "[LOADING] JVM shutdown." << std::endl;
    return 0;
}

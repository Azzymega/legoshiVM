#include <iostream>
#include "class-loader/io/loader.h"
#include "class-loader/engine/sub-engines/class_mt_engine.h"
#include "class-loader/class_file.h"
#include "class-loader/engine/class_machine.h"
#include "class-loader/constant-pool-types/constant_utf8_info.h"
#include "vm/base/lvm.h"
#include "vm/base/memory/init_lvm.h"

int main(int argc, char* argv[])
{
    loader ld;
    std::cout << "LegoshiVM" << std::endl;
    if (argv[1] == nullptr){
        std::cout << "[ERROR] Class file is missing" << std::endl;
    }
    else {
        std::cout << "[LOADING] Initializing JVM" << std::endl;
        ld.load(argv[1]);
        class_file file = class_file();
        class_machine machine = class_machine();
        file = *static_cast<class_file*>(machine.perform_analyzing(&ld));
        lvm main_runtime = init_lvm::init_runtime(file);
        std::cout << "[LOADING] JVM initialized. Main class loaded." << std::endl;
        std::cout << "[LOADING] Loading additional classes." << std::endl;
        std::cout << "[LOADING] Loading additional classes." << std::endl;
        for (int i = 0; i < file.constant_pool_count; ++i) {
            auto* path = dynamic_cast<constant_utf8_info*>(file.constant_pool[i]);
            if (path) {
                ld.load(*path->string+".class");
                file = *static_cast<class_file*>(machine.perform_analyzing(&ld));
                main_runtime.memory_controller.assemblies.push_back(file);
            }
        }
    }
    return 0;
}

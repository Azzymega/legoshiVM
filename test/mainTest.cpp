/*
 * PROJECT:     LegoshiVM - Main test
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/

#include <iostream>
#include "../src/class-loader/io/loader.h"
#include "../src/class-loader/engine/sub-engines/class_mt_engine.h"
#include "../src/class-loader/class_file.h"
#include "../src/class-loader/engine/class_machine.h"
#include "../src/lvm/base/lvm.h"
#include "../src/lvm/interpretor/interpretor.h"

int main(int argc, char* argv[])
{
    try {
        std::vector<std::string> names = {"HelloWorld.class","java/lang/Object.class","java/lang/String.class","java/lang/System.class"};
        loader ld;
        lvm main_runtime;
        for (int i = 0; i < names.size(); ++i) {
            ld.load(names[i]);
            class_file file = class_file();
            class_machine machine = class_machine();
            file = *dynamic_cast<class_file*>(machine.perform_analyzing(&ld));
            main_runtime.memory_controller.assemblies.push_back(file);
        }
        main_runtime.init_first_thread();
        interpreter::interpret(&main_runtime.threads.top()->frame_stack.top(),main_runtime.threads.top(),&main_runtime);
    }
    catch(const char* message) {
        std::cout << "[MainTest] Test FAILED!!! " << message <<std::endl;
    }
    std::cout << "[MainTest] Test passed" << std::endl;
    return 0;
}

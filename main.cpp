#include <iostream>
#include "class-loader/io/loader.h"
#include "class-loader/engine/sub-engines/class_mt_engine.h"
#include "class-loader/class_file.h"
#include "class-loader/engine/class_machine.h"
#include "class-loader/constant-pool-types/constant_utf8_info.h"

int main()
{
    loader ld = loader("Main.class");
    ld.load();
    class_file file = class_file();
    class_machine machine = class_machine();
    file = *static_cast<class_file*>(machine.perform_analyzing(&ld));
    std::cout<< static_cast<constant_utf8_info*>(file.constant_pool[3])->string->c_str()<<std::endl;
    std::cout<< static_cast<constant_utf8_info*>(file.constant_pool[32])->string->c_str()<<std::endl;
    return 0;
}

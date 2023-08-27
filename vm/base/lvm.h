//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_LVM_H
#define LEGOSHIVM_LVM_H


#include <string>
#include "def.h"
#include "vm-types/method.h"
#include "../../class-loader/class_file.h"

class lvm {
public:
    u4 pc;
    std::vector<class_file> assemblies; // убрать и дописать фабрику
    std::stack<method> frames;
};


#endif //LEGOSHIVM_LVM_H

//
// Created by Danil on 30.08.2023.
//

#ifndef LEGOSHIVM_INIT_METHOD_ENGINE_H
#define LEGOSHIVM_INIT_METHOD_ENGINE_H


#include "../vm-types/method.h"
#include "../../../class-loader/field-method/methods.h"

class init_method_engine {
public:
    static method *init_method(const methods &mt, class_file *file);
};


#endif //LEGOSHIVM_INIT_METHOD_ENGINE_H

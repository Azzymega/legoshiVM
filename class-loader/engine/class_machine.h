//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_MACHINE_H
#define LEGOSHIVM_CLASS_MACHINE_H


#include "sub-engines/class_attribute_engine.h"
#include "sub-engines/class_const_pool_engine.h"
#include "sub-engines/class_mt_engine.h"
#include "sub-engines/class_field_engine.h"
#include "sub-engines/class_method_engine.h"
#include "sub-engines/class_interface_engine.h"

class class_machine : public abstract_engine{
private:
    class_interface_engine class_interface_engine;
    class_field_engine class_field_engine;
    class_method_engine class_method_engine;
    class_attribute_engine class_attribute_engine;
    class_const_pool_engine class_const_pool_engine;
    class_mt_engine class_mt_engine;
public:
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_MACHINE_H

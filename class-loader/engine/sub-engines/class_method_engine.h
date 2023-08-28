//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_CLASS_METHOD_ENGINE_H
#define LEGOSHIVM_CLASS_METHOD_ENGINE_H


#include "../abstract_engine.h"
#include "class_attribute_engine.h"

class class_method_engine : public abstract_engine {
public:
    class_attribute_engine class_attribute_engine;
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_METHOD_ENGINE_H

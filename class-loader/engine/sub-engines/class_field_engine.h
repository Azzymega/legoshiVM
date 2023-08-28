//
// Created by Danil on 28.08.2023.
//

#ifndef LEGOSHIVM_CLASS_FIELD_ENGINE_H
#define LEGOSHIVM_CLASS_FIELD_ENGINE_H


#include "../abstract_engine.h"
#include "class_attribute_engine.h"

class class_field_engine : public abstract_engine{
private:
    class_attribute_engine class_attribute_engine;
public:
    abstract_data * perform_analyzing(loader *loader) override;
};


#endif //LEGOSHIVM_CLASS_FIELD_ENGINE_H

//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_MT_ENGINE_H
#define LEGOSHIVM_CLASS_MT_ENGINE_H


#include "../abstract_engine.h"
#include "../../utility/class_metadata.h"

class class_mt_engine : public abstract_engine{
public:
    abstract_data * perform_analyzing(loader* loader) override;

    abstract_data *perform_second_analyzing(loader *loader);
};


#endif //LEGOSHIVM_CLASS_MT_ENGINE_H

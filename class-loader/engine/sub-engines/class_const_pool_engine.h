//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H
#define LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H


#include "../abstract_engine.h"
#include "class_item_engine.h"

class class_const_pool_engine : public abstract_engine {
private:
    class_item_engine const_pool_item_engine;
public:
    abstract_data * perform_analyzing(loader* loader) override;
};


#endif //LEGOSHIVM_CLASS_CONST_POOL_ENGINE_H

//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_CLASS_ITEM_ENGINE_H
#define LEGOSHIVM_CLASS_ITEM_ENGINE_H

#include "../../core/tags.h"
#include "../abstract_engine.h"

class class_item_engine : public abstract_engine {
public:
    u2* size;
    abstract_data * perform_analyzing(loader* loader) override;
};


#endif //LEGOSHIVM_CLASS_ITEM_ENGINE_H

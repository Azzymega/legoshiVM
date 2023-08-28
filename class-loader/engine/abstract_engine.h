//
// Created by Danil on 27.08.2023.
//

#ifndef LEGOSHIVM_ABSTRACT_ENGINE_H
#define LEGOSHIVM_ABSTRACT_ENGINE_H


#include "../utility/abstract_data.h"
#include "../io/loader.h"

class abstract_engine {
public:
    abstract_engine();
    virtual abstract_data* perform_analyzing(loader* loader) = 0;
};


#endif //LEGOSHIVM_ABSTRACT_ENGINE_H

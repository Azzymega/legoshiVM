//
// Created by Danil on 27.08.2023.
//

#include "class_mt_engine.h"

abstract_data* class_mt_engine::perform_analyzing(loader *loader) {
    auto* data = new class_metadata();
    data->resolve_reserved(loader->init_u4());
    data->resolve_min_ver(loader->init_u2());
    data->resolve_maj_ver(loader->init_u2());
    return data;
}

abstract_data* class_mt_engine::perform_second_analyzing(loader *loader) {
    auto* data = new class_metadata();
    data->resolve_acc_flags(loader->init_u2());
    data->resolve_this(loader->init_u2());
    data->resolve_super(loader->init_u2());
    return data;
}

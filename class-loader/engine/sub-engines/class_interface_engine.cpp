//
// Created by Danil on 28.08.2023.
//

#include "class_interface_engine.h"
#include "../../field-method/interface.h"

abstract_data *class_interface_engine::perform_analyzing(loader *loader) {
    auto* data = new interface();
    data->interface_count = loader->init_u2();
    for (int i = 0; i < data->interface_count; ++i) {
        data->interface_indexes.push_back(loader->init_u2());
    }
    return data;
}

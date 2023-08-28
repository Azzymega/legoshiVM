//
// Created by Danil on 28.08.2023.
//

#include "class_method_engine.h"
#include "../../field-method/methods.h"


abstract_data *class_method_engine::perform_analyzing(loader *loader) {
    auto* file = new methods();
    file->access_flags = loader->init_u2();
    file->name_index = loader->init_u2();
    file->signature_index = loader->init_u2();
    file->attributes_count = loader->init_u2();
    for (int i = 0; i < file->attributes_count; ++i) {
        file->attributes.push_back(static_cast<attribute*>(this->class_attribute_engine.perform_analyzing(loader)));
    }
    return file;
}

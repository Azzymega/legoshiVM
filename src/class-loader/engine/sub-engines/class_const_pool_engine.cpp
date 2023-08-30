/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
 */

#include "class_const_pool_engine.h"
#include "../../utility/class_constant_pool.h"

abstract_data *class_const_pool_engine::perform_analyzing(loader *loader) {
    auto* data = new class_constant_pool();
    u2 const_pool_size = loader->init_u2();
    data->resolve_constant_pool_size(const_pool_size);
    const_pool_item_engine.size = &data->constant_pool_length;
    for (int i = 0; i < data->constant_pool_length; ++i) {
        constant_pool_item* item = static_cast<constant_pool_item *>(this->const_pool_item_engine.perform_analyzing(loader));
        if (item != nullptr){
            data->constant_pool.push_back(item);
        }
    }
    return data;
}

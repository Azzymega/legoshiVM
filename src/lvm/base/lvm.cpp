/*
 * PROJECT:     LegoshiVM
 * LICENSE:     GPL - See COPYING in the top level directory
 * PROGRAMMER:  Maltsev Daniil <brickexberiment@lenta.ru>
*/
#include "lvm.h"
#include "../../class-loader/constant-pool-types/constant_method_ref_info.h"
#include "../../class-loader/constant-pool-types/constant_class_info.h"
#include "../../class-loader/constant-pool-types/constant_name_and_type_info.h"
#include "../../class-loader/constant-pool-types/constant_utf8_info.h"
#include "memory/init_method_engine.h"

method *lvm::methodref_check(u2 index, class_file *cplink, lvm* currrent_runtime) {
    constant_method_ref_info* method_link = dynamic_cast<constant_method_ref_info *>(cplink->constant_pool[index - 1]);
    constant_class_info* class_link = dynamic_cast<constant_class_info *>(cplink->constant_pool[
            method_link->class_index - 1]);
    constant_name_and_type_info* type_link = dynamic_cast<constant_name_and_type_info *>(cplink->constant_pool[
            method_link->name_and_type_index - 1]);
    std::string class_name = *dynamic_cast<constant_utf8_info*>(cplink->constant_pool[class_link->name_index-1])->string;
    std::string method_name = *dynamic_cast<constant_utf8_info*>(cplink->constant_pool[type_link->name_index-1])->string;
    for (int i = 0; i < currrent_runtime->memory_controller.assemblies.size(); ++i) {
        if (currrent_runtime->memory_controller.assemblies[i].name == class_name){
            for (int j = 0; j < currrent_runtime->memory_controller.assemblies[i].methods_count; ++j) {
                if (currrent_runtime->memory_controller.assemblies[i].methods[j].name == method_name){
                    return init_method_engine::init_method(currrent_runtime->memory_controller.assemblies[i].methods[j],&currrent_runtime->memory_controller.assemblies[i]);
                }
            }
        }
    }
    return new method();
}

std::string lvm::return_class_name(u4 class_index, class_file *cplink) {
    constant_class_info* class_link = dynamic_cast<constant_class_info *>(cplink->constant_pool[class_index-1]);
    return *dynamic_cast<constant_utf8_info *>(cplink->constant_pool[class_link->name_index-1])->string;
}

void lvm::init_first_thread() {
    thread* thr = new thread();
    this->threads.push(thr);
    thr->frame_stack.push(*init_method_engine::init_method(this->memory_controller.assemblies[0].methods[1],&this->memory_controller.assemblies[0]));
}

//
// Created by Danil on 30.08.2023.
//

#include <iostream>
#include "interpretor.h"
#include "../../class-loader/constant-pool-types/constant_string_info.h"
#include "../../class-loader/constant-pool-types/constant_utf8_info.h"

void interpreter::interpret(method *frame, thread *thread, lvm* runtime) {
    bool returnable = false;
    if (!frame->attributes.empty()) {
        auto* current_mt_code = dynamic_cast<class code*>(frame->attributes[0]);
        for (thread->pc = 0; thread->pc < current_mt_code->code_length; ++thread->pc) {
            switch (current_mt_code->code.at(thread->pc)) {
                case jvm_opcodes::aload_0 : {
                    frame->operands.emplace(frame->vars[0]);
                    break;
                }
                case jvm_opcodes::invokestatic : {
                    u2 index = current_mt_code->code[thread->pc+1] >> 8 | current_mt_code->code[thread->pc+2];
                    thread->pc++;
                    thread->pc++;
                    thread->frame_stack.emplace(*lvm::methodref_check(index, frame->runtime_link, runtime));
                    thread->frame_stack.top().operands = frame->operands;
                    interpret(&thread->frame_stack.top(), thread, runtime);
                    break;
                }
                case jvm_opcodes::return_op : {
                    returnable = true;
                    break;
                }
                case jvm_opcodes::ldc : {
                    thread->pc++;
                    u1 index = current_mt_code->code[thread->pc];
                    auto *info = dynamic_cast<constant_string_info *>(frame->runtime_link->constant_pool[
                            index - 1]);
                    frame->operands.emplace(
                            dynamic_cast<constant_utf8_info *>(frame->runtime_link->constant_pool[info->string_index -
                                                                                                  1]));
                    break;
                }
                default: {
                    std::cout << "[ERROR][JVM_INTERPRETER] Not implemented" << std::endl;
                }
            }
            if (returnable) {
                break;
            }
        }
    }
    else {
        if (frame->name == "out"){
            std::cout << *dynamic_cast<constant_utf8_info *>(frame->operands.top())->string << std::endl;
        }
    }
}

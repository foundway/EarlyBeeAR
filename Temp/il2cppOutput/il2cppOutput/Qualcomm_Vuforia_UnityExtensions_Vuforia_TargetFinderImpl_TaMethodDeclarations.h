#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinderImpl/TargetFinderState
struct TargetFinderState_t806;
struct TargetFinderState_t806_marshaled;

void TargetFinderState_t806_marshal(const TargetFinderState_t806& unmarshaled, TargetFinderState_t806_marshaled& marshaled);
void TargetFinderState_t806_marshal_back(const TargetFinderState_t806_marshaled& marshaled, TargetFinderState_t806& unmarshaled);
void TargetFinderState_t806_marshal_cleanup(TargetFinderState_t806_marshaled& marshaled);

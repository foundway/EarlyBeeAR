#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t2054;
struct PreviousInfo_t2054_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m11016 (PreviousInfo_t2054 * __this, bool ___dummy, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t2054_marshal(const PreviousInfo_t2054& unmarshaled, PreviousInfo_t2054_marshaled& marshaled);
void PreviousInfo_t2054_marshal_back(const PreviousInfo_t2054_marshaled& marshaled, PreviousInfo_t2054& unmarshaled);
void PreviousInfo_t2054_marshal_cleanup(PreviousInfo_t2054_marshaled& marshaled);

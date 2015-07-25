#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t1017;
struct Gradient_t1017_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m6086 (Gradient_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m6087 (Gradient_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m6088 (Gradient_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m6089 (Gradient_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t1017_marshal(const Gradient_t1017& unmarshaled, Gradient_t1017_marshaled& marshaled);
void Gradient_t1017_marshal_back(const Gradient_t1017_marshaled& marshaled, Gradient_t1017& unmarshaled);
void Gradient_t1017_marshal_cleanup(Gradient_t1017_marshaled& marshaled);

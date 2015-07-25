#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t413;
struct Coroutine_t413_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5938 (Coroutine_t413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5939 (Coroutine_t413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5940 (Coroutine_t413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t413_marshal(const Coroutine_t413& unmarshaled, Coroutine_t413_marshaled& marshaled);
void Coroutine_t413_marshal_back(const Coroutine_t413_marshaled& marshaled, Coroutine_t413& unmarshaled);
void Coroutine_t413_marshal_cleanup(Coroutine_t413_marshaled& marshaled);

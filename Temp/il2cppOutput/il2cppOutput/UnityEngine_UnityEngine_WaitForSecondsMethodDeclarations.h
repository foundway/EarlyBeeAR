#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t519;
struct WaitForSeconds_t519_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m2746 (WaitForSeconds_t519 * __this, float ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t519_marshal(const WaitForSeconds_t519& unmarshaled, WaitForSeconds_t519_marshaled& marshaled);
void WaitForSeconds_t519_marshal_back(const WaitForSeconds_t519_marshaled& marshaled, WaitForSeconds_t519& unmarshaled);
void WaitForSeconds_t519_marshal_cleanup(WaitForSeconds_t519_marshaled& marshaled);

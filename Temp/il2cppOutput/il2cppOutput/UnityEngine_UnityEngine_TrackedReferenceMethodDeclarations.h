#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t1100;
struct TrackedReference_t1100_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C" bool TrackedReference_Equals_m7151 (TrackedReference_t1100 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C" int32_t TrackedReference_GetHashCode_m7152 (TrackedReference_t1100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C" bool TrackedReference_op_Equality_m7153 (Object_t * __this /* static, unused */, TrackedReference_t1100 * ___x, TrackedReference_t1100 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t1100_marshal(const TrackedReference_t1100& unmarshaled, TrackedReference_t1100_marshaled& marshaled);
void TrackedReference_t1100_marshal_back(const TrackedReference_t1100_marshaled& marshaled, TrackedReference_t1100& unmarshaled);
void TrackedReference_t1100_marshal_cleanup(TrackedReference_t1100_marshaled& marshaled);

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector4
struct Vector4_t173;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Vector4__ctor_m837 (Vector4_t173 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single)
extern "C" void Vector4__ctor_m840 (Vector4_t173 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
extern "C" float Vector4_get_Item_m2726 (Vector4_t173 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
extern "C" void Vector4_set_Item_m2728 (Vector4_t173 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C" int32_t Vector4_GetHashCode_m6392 (Vector4_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern "C" bool Vector4_Equals_m6393 (Vector4_t173 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector4::ToString()
extern "C" String_t* Vector4_ToString_m6394 (Vector4_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" float Vector4_Dot_m6395 (Object_t * __this /* static, unused */, Vector4_t173  ___a, Vector4_t173  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::SqrMagnitude(UnityEngine.Vector4)
extern "C" float Vector4_SqrMagnitude_m6396 (Object_t * __this /* static, unused */, Vector4_t173  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector4::get_sqrMagnitude()
extern "C" float Vector4_get_sqrMagnitude_m2710 (Vector4_t173 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C" Vector4_t173  Vector4_get_zero_m2715 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Subtraction(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" Vector4_t173  Vector4_op_Subtraction_m6397 (Object_t * __this /* static, unused */, Vector4_t173  ___a, Vector4_t173  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C" Vector4_t173  Vector4_op_Division_m838 (Object_t * __this /* static, unused */, Vector4_t173  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C" bool Vector4_op_Equality_m6398 (Object_t * __this /* static, unused */, Vector4_t173  ___lhs, Vector4_t173  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C" Vector3_t5  Vector4_op_Implicit_m614 (Object_t * __this /* static, unused */, Vector4_t173  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
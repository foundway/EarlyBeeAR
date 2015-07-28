#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t10;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m6322 (Quaternion_t10 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t10  Quaternion_get_identity_m615 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m6323 (Object_t * __this /* static, unused */, Quaternion_t10  ___a, Quaternion_t10  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
extern "C" Quaternion_t10  Quaternion_AngleAxis_m4817 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5  ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_AngleAxis(System.Single,UnityEngine.Vector3&)
extern "C" Quaternion_t10  Quaternion_INTERNAL_CALL_AngleAxis_m6324 (Object_t * __this /* static, unused */, float ___angle, Vector3_t5 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::ToAngleAxis(System.Single&,UnityEngine.Vector3&)
extern "C" void Quaternion_ToAngleAxis_m4912 (Quaternion_t10 * __this, float* ___angle, Vector3_t5 * ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t10  Quaternion_LookRotation_m511 (Object_t * __this /* static, unused */, Vector3_t5  ___forward, Vector3_t5  ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t10  Quaternion_INTERNAL_CALL_LookRotation_m6325 (Object_t * __this /* static, unused */, Vector3_t5 * ___forward, Vector3_t5 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C" Quaternion_t10  Quaternion_Slerp_m581 (Object_t * __this /* static, unused */, Quaternion_t10  ___from, Quaternion_t10  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Slerp(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single)
extern "C" Quaternion_t10  Quaternion_INTERNAL_CALL_Slerp_m6326 (Object_t * __this /* static, unused */, Quaternion_t10 * ___from, Quaternion_t10 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t10  Quaternion_Inverse_m601 (Object_t * __this /* static, unused */, Quaternion_t10  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t10  Quaternion_INTERNAL_CALL_Inverse_m6327 (Object_t * __this /* static, unused */, Quaternion_t10 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m6328 (Quaternion_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C" Vector3_t5  Quaternion_get_eulerAngles_m575 (Quaternion_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
extern "C" Quaternion_t10  Quaternion_Euler_m576 (Object_t * __this /* static, unused */, Vector3_t5  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
extern "C" Vector3_t5  Quaternion_Internal_ToEulerRad_m6329 (Object_t * __this /* static, unused */, Quaternion_t10  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
extern "C" Vector3_t5  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m6330 (Object_t * __this /* static, unused */, Quaternion_t10 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
extern "C" Quaternion_t10  Quaternion_Internal_FromEulerRad_m6331 (Object_t * __this /* static, unused */, Vector3_t5  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
extern "C" Quaternion_t10  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m6332 (Object_t * __this /* static, unused */, Vector3_t5 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::Internal_ToAxisAngleRad(UnityEngine.Quaternion,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_Internal_ToAxisAngleRad_m6333 (Object_t * __this /* static, unused */, Quaternion_t10  ___q, Vector3_t5 * ___axis, float* ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToAxisAngleRad(UnityEngine.Quaternion&,UnityEngine.Vector3&,System.Single&)
extern "C" void Quaternion_INTERNAL_CALL_Internal_ToAxisAngleRad_m6334 (Object_t * __this /* static, unused */, Quaternion_t10 * ___q, Vector3_t5 * ___axis, float* ___angle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m6335 (Quaternion_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m6336 (Quaternion_t10 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t10  Quaternion_op_Multiply_m602 (Object_t * __this /* static, unused */, Quaternion_t10  ___lhs, Quaternion_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5  Quaternion_op_Multiply_m611 (Object_t * __this /* static, unused */, Quaternion_t10  ___rotation, Vector3_t5  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m2803 (Object_t * __this /* static, unused */, Quaternion_t10  ___lhs, Quaternion_t10  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;

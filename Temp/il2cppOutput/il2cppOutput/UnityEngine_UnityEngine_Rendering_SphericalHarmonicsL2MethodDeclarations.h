﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rendering.SphericalHarmonicsL2
struct SphericalHarmonicsL2_t1054;
// System.Object
struct Object_t;
// UnityEngine.Rendering.SphericalHarmonicsL2
#include "UnityEngine_UnityEngine_Rendering_SphericalHarmonicsL2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::Clear()
extern "C" void SphericalHarmonicsL2_Clear_m6446 (SphericalHarmonicsL2_t1054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_ClearInternal_m6447 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_ClearInternal(UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_ClearInternal_m6448 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLight(UnityEngine.Color)
extern "C" void SphericalHarmonicsL2_AddAmbientLight_m6449 (SphericalHarmonicsL2_t1054 * __this, Color_t51  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddAmbientLightInternal(UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddAmbientLightInternal_m6450 (Object_t * __this /* static, unused */, Color_t51  ___color, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddAmbientLightInternal(UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddAmbientLightInternal_m6451 (Object_t * __this /* static, unused */, Color_t51 * ___color, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLight(UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C" void SphericalHarmonicsL2_AddDirectionalLight_m6452 (SphericalHarmonicsL2_t1054 * __this, Vector3_t5  ___direction, Color_t51  ___color, float ___intensity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::AddDirectionalLightInternal(UnityEngine.Vector3,UnityEngine.Color,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_AddDirectionalLightInternal_m6453 (Object_t * __this /* static, unused */, Vector3_t5  ___direction, Color_t51  ___color, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::INTERNAL_CALL_AddDirectionalLightInternal(UnityEngine.Vector3&,UnityEngine.Color&,UnityEngine.Rendering.SphericalHarmonicsL2&)
extern "C" void SphericalHarmonicsL2_INTERNAL_CALL_AddDirectionalLightInternal_m6454 (Object_t * __this /* static, unused */, Vector3_t5 * ___direction, Color_t51 * ___color, SphericalHarmonicsL2_t1054 * ___sh, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rendering.SphericalHarmonicsL2::get_Item(System.Int32,System.Int32)
extern "C" float SphericalHarmonicsL2_get_Item_m6455 (SphericalHarmonicsL2_t1054 * __this, int32_t ___rgb, int32_t ___coefficient, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rendering.SphericalHarmonicsL2::set_Item(System.Int32,System.Int32,System.Single)
extern "C" void SphericalHarmonicsL2_set_Item_m6456 (SphericalHarmonicsL2_t1054 * __this, int32_t ___rgb, int32_t ___coefficient, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rendering.SphericalHarmonicsL2::GetHashCode()
extern "C" int32_t SphericalHarmonicsL2_GetHashCode_m6457 (SphericalHarmonicsL2_t1054 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::Equals(System.Object)
extern "C" bool SphericalHarmonicsL2_Equals_m6458 (SphericalHarmonicsL2_t1054 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(UnityEngine.Rendering.SphericalHarmonicsL2,System.Single)
extern "C" SphericalHarmonicsL2_t1054  SphericalHarmonicsL2_op_Multiply_m6459 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054  ___lhs, float ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Multiply(System.Single,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t1054  SphericalHarmonicsL2_op_Multiply_m6460 (Object_t * __this /* static, unused */, float ___lhs, SphericalHarmonicsL2_t1054  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rendering.SphericalHarmonicsL2 UnityEngine.Rendering.SphericalHarmonicsL2::op_Addition(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" SphericalHarmonicsL2_t1054  SphericalHarmonicsL2_op_Addition_m6461 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054  ___lhs, SphericalHarmonicsL2_t1054  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Equality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Equality_m6462 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054  ___lhs, SphericalHarmonicsL2_t1054  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rendering.SphericalHarmonicsL2::op_Inequality(UnityEngine.Rendering.SphericalHarmonicsL2,UnityEngine.Rendering.SphericalHarmonicsL2)
extern "C" bool SphericalHarmonicsL2_op_Inequality_m6463 (Object_t * __this /* static, unused */, SphericalHarmonicsL2_t1054  ___lhs, SphericalHarmonicsL2_t1054  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
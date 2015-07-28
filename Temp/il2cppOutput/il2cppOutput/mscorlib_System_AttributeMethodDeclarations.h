#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Attribute
struct Attribute_t225;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t1282;

// System.Void System.Attribute::.ctor()
extern "C" void Attribute__ctor_m4798 (Attribute_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C" void Attribute_CheckParameters_m10203 (Object_t * __this /* static, unused */, Object_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C" Attribute_t225 * Attribute_GetCustomAttribute_m10204 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" Attribute_t225 * Attribute_GetCustomAttribute_m10205 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C" int32_t Attribute_GetHashCode_m5718 (Attribute_t225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C" bool Attribute_IsDefined_m10206 (Object_t * __this /* static, unused */, ParameterInfo_t1282 * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C" bool Attribute_IsDefined_m10207 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m10208 (Object_t * __this /* static, unused */, MemberInfo_t * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C" bool Attribute_IsDefined_m10209 (Object_t * __this /* static, unused */, ParameterInfo_t1282 * ___element, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C" bool Attribute_Equals_m5717 (Attribute_t225 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;

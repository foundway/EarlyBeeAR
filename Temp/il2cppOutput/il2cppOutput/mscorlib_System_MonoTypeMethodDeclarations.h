#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoType
struct MonoType_t;
// System.Type
struct Type_t;
// System.Reflection.Assembly
struct Assembly_t1788;
// System.String
struct String_t;
// System.Reflection.Module
struct Module_t2018;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1163;
// System.Reflection.Binder
struct Binder_t1286;
// System.Type[]
struct TypeU5BU5D_t930;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t1287;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1279;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1284;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t222;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1283;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Globalization.CultureInfo
struct CultureInfo_t1255;
// System.String[]
struct StringU5BU5D_t208;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Reflection.MethodBase
struct MethodBase_t1270;
// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Reflection.TypeAttributes System.MonoType::get_attributes(System.Type)
extern "C" int32_t MonoType_get_attributes_m14235 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetDefaultConstructor()
extern "C" ConstructorInfo_t1163 * MonoType_GetDefaultConstructor_m14236 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.MonoType::GetAttributeFlagsImpl()
extern "C" int32_t MonoType_GetAttributeFlagsImpl_m14237 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.MonoType::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t1163 * MonoType_GetConstructorImpl_m14238 (MonoType_t * __this, int32_t ___bindingAttr, Binder_t1286 * ___binder, int32_t ___callConvention, TypeU5BU5D_t930* ___types, ParameterModifierU5BU5D_t1287* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors_internal(System.Reflection.BindingFlags,System.Type)
extern "C" ConstructorInfoU5BU5D_t1279* MonoType_GetConstructors_internal_m14239 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.MonoType::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1279* MonoType_GetConstructors_m14240 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::InternalGetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_InternalGetEvent_m14241 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.MonoType::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * MonoType_GetEvent_m14242 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.MonoType::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * MonoType_GetField_m14243 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields_internal(System.Reflection.BindingFlags,System.Type)
extern "C" FieldInfoU5BU5D_t1284* MonoType_GetFields_internal_m14244 (MonoType_t * __this, int32_t ___bindingAttr, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.MonoType::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1284* MonoType_GetFields_m14245 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetInterfaces()
extern "C" TypeU5BU5D_t930* MonoType_GetInterfaces_m14246 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t222* MonoType_GetMethodsByName_m14247 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.MonoType::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t222* MonoType_GetMethods_m14248 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.MonoType::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * MonoType_GetMethodImpl_m14249 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1286 * ___binder, int32_t ___callConvention, TypeU5BU5D_t930* ___types, ParameterModifierU5BU5D_t1287* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetPropertiesByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" PropertyInfoU5BU5D_t1283* MonoType_GetPropertiesByName_m14250 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, bool ___icase, Type_t * ___reflected_type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo[] System.MonoType::GetProperties(System.Reflection.BindingFlags)
extern "C" PropertyInfoU5BU5D_t1283* MonoType_GetProperties_m14251 (MonoType_t * __this, int32_t ___bindingAttr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.MonoType::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * MonoType_GetPropertyImpl_m14252 (MonoType_t * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t1286 * ___binder, Type_t * ___returnType, TypeU5BU5D_t930* ___types, ParameterModifierU5BU5D_t1287* ___modifiers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::HasElementTypeImpl()
extern "C" bool MonoType_HasElementTypeImpl_m14253 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsArrayImpl()
extern "C" bool MonoType_IsArrayImpl_m14254 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsByRefImpl()
extern "C" bool MonoType_IsByRefImpl_m14255 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPointerImpl()
extern "C" bool MonoType_IsPointerImpl_m14256 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsPrimitiveImpl()
extern "C" bool MonoType_IsPrimitiveImpl_m14257 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsSubclassOf(System.Type)
extern "C" bool MonoType_IsSubclassOf_m14258 (MonoType_t * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MonoType::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * MonoType_InvokeMember_m14259 (MonoType_t * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t1286 * ___binder, Object_t * ___target, ObjectU5BU5D_t178* ___args, ParameterModifierU5BU5D_t1287* ___modifiers, CultureInfo_t1255 * ___culture, StringU5BU5D_t208* ___namedParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetElementType()
extern "C" Type_t * MonoType_GetElementType_m14260 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_UnderlyingSystemType()
extern "C" Type_t * MonoType_get_UnderlyingSystemType_m14261 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.MonoType::get_Assembly()
extern "C" Assembly_t1788 * MonoType_get_Assembly_m14262 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_AssemblyQualifiedName()
extern "C" String_t* MonoType_get_AssemblyQualifiedName_m14263 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::getFullName(System.Boolean,System.Boolean)
extern "C" String_t* MonoType_getFullName_m14264 (MonoType_t * __this, bool ___full_name, bool ___assembly_qualified, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_BaseType()
extern "C" Type_t * MonoType_get_BaseType_m14265 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_FullName()
extern "C" String_t* MonoType_get_FullName_m14266 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoType_IsDefined_m14267 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t178* MonoType_GetCustomAttributes_m14268 (MonoType_t * __this, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.MonoType::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t178* MonoType_GetCustomAttributes_m14269 (MonoType_t * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.MonoType::get_MemberType()
extern "C" int32_t MonoType_get_MemberType_m14270 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Name()
extern "C" String_t* MonoType_get_Name_m14271 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::get_Namespace()
extern "C" String_t* MonoType_get_Namespace_m14272 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.MonoType::get_Module()
extern "C" Module_t2018 * MonoType_get_Module_m14273 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_DeclaringType()
extern "C" Type_t * MonoType_get_DeclaringType_m14274 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::get_ReflectedType()
extern "C" Type_t * MonoType_get_ReflectedType_m14275 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.MonoType::get_TypeHandle()
extern "C" RuntimeTypeHandle_t2017  MonoType_get_TypeHandle_m14276 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoType_GetObjectData_m14277 (MonoType_t * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MonoType::ToString()
extern "C" String_t* MonoType_ToString_m14278 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.MonoType::GetGenericArguments()
extern "C" TypeU5BU5D_t930* MonoType_GetGenericArguments_m14279 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_ContainsGenericParameters()
extern "C" bool MonoType_get_ContainsGenericParameters_m14280 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MonoType::get_IsGenericParameter()
extern "C" bool MonoType_get_IsGenericParameter_m14281 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.MonoType::GetGenericTypeDefinition()
extern "C" Type_t * MonoType_GetGenericTypeDefinition_m14282 (MonoType_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.MonoType::CheckMethodSecurity(System.Reflection.MethodBase)
extern "C" MethodBase_t1270 * MonoType_CheckMethodSecurity_m14283 (MonoType_t * __this, MethodBase_t1270 * ___mb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoType::ReorderParamArrayArguments(System.Object[]&,System.Reflection.MethodBase)
extern "C" void MonoType_ReorderParamArrayArguments_m14284 (MonoType_t * __this, ObjectU5BU5D_t178** ___args, MethodBase_t1270 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;

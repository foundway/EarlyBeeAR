#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Type
struct Type_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2370;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t2371;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Runtime.Serialization.SerializationInfo::.ctor(System.Type,System.Runtime.Serialization.IFormatterConverter)
extern "C" void SerializationInfo__ctor_m13061 (SerializationInfo_t1208 * __this, Type_t * ___type, Object_t * ___converter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C" void SerializationInfo_AddValue_m8826 (SerializationInfo_t1208 * __this, String_t* ___name, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C" Object_t * SerializationInfo_GetValue_m8829 (SerializationInfo_t1208 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C" void SerializationInfo_SetType_m13062 (SerializationInfo_t1208 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationInfoEnumerator System.Runtime.Serialization.SerializationInfo::GetEnumerator()
extern "C" SerializationInfoEnumerator_t2371 * SerializationInfo_GetEnumerator_m13063 (SerializationInfo_t1208 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int16)
extern "C" void SerializationInfo_AddValue_m13064 (SerializationInfo_t1208 * __this, String_t* ___name, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C" void SerializationInfo_AddValue_m8828 (SerializationInfo_t1208 * __this, String_t* ___name, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C" void SerializationInfo_AddValue_m8827 (SerializationInfo_t1208 * __this, String_t* ___name, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
extern "C" void SerializationInfo_AddValue_m13065 (SerializationInfo_t1208 * __this, String_t* ___name, DateTime_t700  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
extern "C" void SerializationInfo_AddValue_m13066 (SerializationInfo_t1208 * __this, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt32)
extern "C" void SerializationInfo_AddValue_m13067 (SerializationInfo_t1208 * __this, String_t* ___name, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int64)
extern "C" void SerializationInfo_AddValue_m8842 (SerializationInfo_t1208 * __this, String_t* ___name, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C" void SerializationInfo_AddValue_m13068 (SerializationInfo_t1208 * __this, String_t* ___name, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C" void SerializationInfo_AddValue_m8841 (SerializationInfo_t1208 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C" bool SerializationInfo_GetBoolean_m8831 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.SerializationInfo::GetInt16(System.String)
extern "C" int16_t SerializationInfo_GetInt16_m13069 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C" int32_t SerializationInfo_GetInt32_m8840 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.SerializationInfo::GetInt64(System.String)
extern "C" int64_t SerializationInfo_GetInt64_m8839 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C" String_t* SerializationInfo_GetString_m8838 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Runtime.Serialization.SerializationInfo::GetUInt32(System.String)
extern "C" uint32_t SerializationInfo_GetUInt32_m13070 (SerializationInfo_t1208 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MissingMemberException
struct MissingMemberException_t2509;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMemberException::.ctor()
extern "C" void MissingMemberException__ctor_m14205 (MissingMemberException_t2509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String)
extern "C" void MissingMemberException__ctor_m14206 (MissingMemberException_t2509 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException__ctor_m14207 (MissingMemberException_t2509 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::.ctor(System.String,System.String)
extern "C" void MissingMemberException__ctor_m14208 (MissingMemberException_t2509 * __this, String_t* ___className, String_t* ___memberName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMemberException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMemberException_GetObjectData_m14209 (MissingMemberException_t2509 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMemberException::get_Message()
extern "C" String_t* MissingMemberException_get_Message_m14210 (MissingMemberException_t2509 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

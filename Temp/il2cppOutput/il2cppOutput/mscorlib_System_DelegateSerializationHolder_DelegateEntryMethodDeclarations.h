#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2486;
// System.Delegate
struct Delegate_t200;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m14117 (DelegateEntry_t2486 * __this, Delegate_t200 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t200 * DelegateEntry_DeserializeDelegate_m14118 (DelegateEntry_t2486 * __this, SerializationInfo_t1208 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;

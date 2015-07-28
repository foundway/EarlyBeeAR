#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t985;
struct ScriptableObject_t985_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" void ScriptableObject__ctor_m5941 (ScriptableObject_t985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
extern "C" void ScriptableObject_Internal_CreateScriptableObject_m5942 (Object_t * __this /* static, unused */, ScriptableObject_t985 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
extern "C" ScriptableObject_t985 * ScriptableObject_CreateInstance_m5943 (Object_t * __this /* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
extern "C" ScriptableObject_t985 * ScriptableObject_CreateInstance_m5944 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
extern "C" ScriptableObject_t985 * ScriptableObject_CreateInstanceFromType_m5945 (Object_t * __this /* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t985_marshal(const ScriptableObject_t985& unmarshaled, ScriptableObject_t985_marshaled& marshaled);
void ScriptableObject_t985_marshal_back(const ScriptableObject_t985_marshaled& marshaled, ScriptableObject_t985& unmarshaled);
void ScriptableObject_t985_marshal_cleanup(ScriptableObject_t985_marshaled& marshaled);

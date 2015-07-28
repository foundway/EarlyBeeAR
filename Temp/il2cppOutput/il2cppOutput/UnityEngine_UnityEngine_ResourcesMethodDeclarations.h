#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Resources
struct Resources_t1052;
// UnityEngine.Object
struct Object_t172;
struct Object_t172_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
struct AsyncOperation_t974;
struct AsyncOperation_t974_marshaled;

// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C" Object_t172 * Resources_Load_m6424 (Object_t * __this /* static, unused */, String_t* ___path, Type_t * ___systemTypeInstance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
extern "C" AsyncOperation_t974 * Resources_UnloadUnusedAssets_m5390 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

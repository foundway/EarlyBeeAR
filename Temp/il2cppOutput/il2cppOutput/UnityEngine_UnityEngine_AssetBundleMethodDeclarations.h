﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AssetBundle
struct AssetBundle_t975;
// UnityEngine.Object
struct Object_t172;
struct Object_t172_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t874;

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t172 * AssetBundle_LoadAsset_m5930 (AssetBundle_t975 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t172 * AssetBundle_LoadAsset_Internal_m5931 (AssetBundle_t975 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t874* AssetBundle_LoadAssetWithSubAssets_Internal_m5932 (AssetBundle_t975 * __this, String_t* ___name, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture
struct Texture_t58;
// UnityEngine.FilterMode
#include "UnityEngine_UnityEngine_FilterMode.h"
// UnityEngine.TextureWrapMode
#include "UnityEngine_UnityEngine_TextureWrapMode.h"

// System.Void UnityEngine.Texture::.ctor()
extern "C" void Texture__ctor_m6054 (Texture_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetWidth(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetWidth_m6055 (Object_t * __this /* static, unused */, Texture_t58 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::Internal_GetHeight(UnityEngine.Texture)
extern "C" int32_t Texture_Internal_GetHeight_m6056 (Object_t * __this /* static, unused */, Texture_t58 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_width()
extern "C" int32_t Texture_get_width_m771 (Texture_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_width(System.Int32)
extern "C" void Texture_set_width_m6057 (Texture_t58 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::get_height()
extern "C" int32_t Texture_get_height_m772 (Texture_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_height(System.Int32)
extern "C" void Texture_set_height_m6058 (Texture_t58 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" void Texture_set_filterMode_m5697 (Texture_t58 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" void Texture_set_wrapMode_m5698 (Texture_t58 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Texture::GetNativeTextureID()
extern "C" int32_t Texture_GetNativeTextureID_m925 (Texture_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

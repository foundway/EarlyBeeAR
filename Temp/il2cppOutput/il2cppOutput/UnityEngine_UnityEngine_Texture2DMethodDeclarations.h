#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Texture2D
struct Texture2D_t368;
// UnityEngine.Color[]
struct ColorU5BU5D_t857;
// UnityEngine.Color32[]
struct Color32U5BU5D_t680;
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m5098 (Texture2D_t368 * __this, int32_t ___width, int32_t ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture2D__ctor_m5696 (Texture2D_t368 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m6059 (Object_t * __this /* static, unused */, Texture2D_t368 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" int32_t Texture2D_get_format_m5009 (Texture2D_t368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t368 * Texture2D_get_whiteTexture_m2651 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t51  Texture2D_GetPixelBilinear_m2732 (Texture2D_t368 * __this, float ___u, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" void Texture2D_SetPixels_m5014 (Texture2D_t368 * __this, ColorU5BU5D_t857* ___colors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m6060 (Texture2D_t368 * __this, ColorU5BU5D_t857* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m6061 (Texture2D_t368 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, ColorU5BU5D_t857* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetAllPixels32_m6062 (Texture2D_t368 * __this, Color32U5BU5D_t680* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" void Texture2D_SetPixels32_m5552 (Texture2D_t368 * __this, Color32U5BU5D_t680* ___colors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetPixels32_m6063 (Texture2D_t368 * __this, Color32U5BU5D_t680* ___colors, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" ColorU5BU5D_t857* Texture2D_GetPixels_m5011 (Texture2D_t368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t857* Texture2D_GetPixels_m6064 (Texture2D_t368 * __this, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t857* Texture2D_GetPixels_m6065 (Texture2D_t368 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C" Color32U5BU5D_t680* Texture2D_GetPixels32_m6066 (Texture2D_t368 * __this, int32_t ___miplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" Color32U5BU5D_t680* Texture2D_GetPixels32_m5549 (Texture2D_t368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m6067 (Texture2D_t368 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m5553 (Texture2D_t368 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" bool Texture2D_Resize_m5010 (Texture2D_t368 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___hasMipMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_ReadPixels_m5548 (Texture2D_t368 * __this, Rect_t62  ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_INTERNAL_CALL_ReadPixels_m6068 (Object_t * __this /* static, unused */, Texture2D_t368 * ___self, Rect_t62 * ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, MethodInfo* method) IL2CPP_METHOD_ATTR;

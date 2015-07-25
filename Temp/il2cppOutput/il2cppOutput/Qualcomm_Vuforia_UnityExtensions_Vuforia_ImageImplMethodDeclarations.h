#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ImageImpl
struct ImageImpl_t681;
// System.Byte[]
struct ByteU5BU5D_t679;
// UnityEngine.Texture2D
struct Texture2D_t368;
// UnityEngine.Color32[]
struct Color32U5BU5D_t680;
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.TextureFormat
#include "UnityEngine_UnityEngine_TextureFormat.h"

// System.Int32 Vuforia.ImageImpl::get_Width()
extern "C" int32_t ImageImpl_get_Width_m3433 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Width(System.Int32)
extern "C" void ImageImpl_set_Width_m3434 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Height()
extern "C" int32_t ImageImpl_get_Height_m3435 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Height(System.Int32)
extern "C" void ImageImpl_set_Height_m3436 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_Stride()
extern "C" int32_t ImageImpl_get_Stride_m3437 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Stride(System.Int32)
extern "C" void ImageImpl_set_Stride_m3438 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferWidth()
extern "C" int32_t ImageImpl_get_BufferWidth_m3439 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferWidth(System.Int32)
extern "C" void ImageImpl_set_BufferWidth_m3440 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.ImageImpl::get_BufferHeight()
extern "C" int32_t ImageImpl_get_BufferHeight_m3441 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_BufferHeight(System.Int32)
extern "C" void ImageImpl_set_BufferHeight_m3442 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image/PIXEL_FORMAT Vuforia.ImageImpl::get_PixelFormat()
extern "C" int32_t ImageImpl_get_PixelFormat_m3443 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_PixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C" void ImageImpl_set_PixelFormat_m3444 (ImageImpl_t681 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Vuforia.ImageImpl::get_Pixels()
extern "C" ByteU5BU5D_t679* ImageImpl_get_Pixels_m3445 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_Pixels(System.Byte[])
extern "C" void ImageImpl_set_Pixels_m3446 (ImageImpl_t681 * __this, ByteU5BU5D_t679* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.ImageImpl::get_UnmanagedData()
extern "C" IntPtr_t ImageImpl_get_UnmanagedData_m3447 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::set_UnmanagedData(System.IntPtr)
extern "C" void ImageImpl_set_UnmanagedData_m3448 (ImageImpl_t681 * __this, IntPtr_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::.ctor()
extern "C" void ImageImpl__ctor_m3449 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::Finalize()
extern "C" void ImageImpl_Finalize_m3450 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ImageImpl::IsValid()
extern "C" bool ImageImpl_IsValid_m3451 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyToTexture(UnityEngine.Texture2D)
extern "C" void ImageImpl_CopyToTexture_m3452 (ImageImpl_t681 * __this, Texture2D_t368 * ___texture2D, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ImageImpl::CopyPixelsFromUnmanagedBuffer()
extern "C" void ImageImpl_CopyPixelsFromUnmanagedBuffer_m3453 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.ImageImpl::GetPixels32()
extern "C" Color32U5BU5D_t680* ImageImpl_GetPixels32_m3454 (ImageImpl_t681 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat Vuforia.ImageImpl::ConvertPixelFormat(Vuforia.Image/PIXEL_FORMAT)
extern "C" int32_t ImageImpl_ConvertPixelFormat_m3455 (ImageImpl_t681 * __this, int32_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;

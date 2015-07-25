#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamImpl
struct WebCamImpl_t674;
// UnityEngine.Camera[]
struct CameraU5BU5D_t235;
// System.String
struct String_t;
// UnityEngine.Color32[]
struct Color32U5BU5D_t680;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"

// System.Boolean Vuforia.WebCamImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamImpl_get_DidUpdateThisFrame_m4605 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsPlaying()
extern "C" bool WebCamImpl_get_IsPlaying_m4606 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualWidth()
extern "C" int32_t WebCamImpl_get_ActualWidth_m4607 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.WebCamImpl::get_ActualHeight()
extern "C" int32_t WebCamImpl_get_ActualHeight_m4608 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_IsTextureSizeAvailable()
extern "C" bool WebCamImpl_get_IsTextureSizeAvailable_m4609 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::set_IsTextureSizeAvailable(System.Boolean)
extern "C" void WebCamImpl_set_IsTextureSizeAvailable_m4610 (WebCamImpl_t674 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::get_FlipHorizontally()
extern "C" bool WebCamImpl_get_FlipHorizontally_m4611 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/Vec2I Vuforia.WebCamImpl::get_ResampledTextureSize()
extern "C" Vec2I_t701  WebCamImpl_get_ResampledTextureSize_m4612 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ComputeResampledTextureSize()
extern "C" void WebCamImpl_ComputeResampledTextureSize_m4613 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::.ctor(UnityEngine.Camera[],System.Int32,System.String,System.Boolean)
extern "C" void WebCamImpl__ctor_m4614 (WebCamImpl_t674 * __this, CameraU5BU5D_t235* ___arCameras, int32_t ___renderTextureLayer, String_t* ___webcamDeviceName, bool ___flipHorizontally, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StartCamera()
extern "C" void WebCamImpl_StartCamera_m4615 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::StopCamera()
extern "C" void WebCamImpl_StopCamera_m4616 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::ResetPlaying()
extern "C" void WebCamImpl_ResetPlaying_m4617 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] Vuforia.WebCamImpl::GetPixels32AndBufferFrame()
extern "C" Color32U5BU5D_t680* WebCamImpl_GetPixels32AndBufferFrame_m4618 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::RenderFrame(System.Int32)
extern "C" void WebCamImpl_RenderFrame_m4619 (WebCamImpl_t674 * __this, int32_t ___frameIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.WebCamImpl::GetVideoMode()
extern "C" VideoModeData_t630  WebCamImpl_GetVideoMode_m4620 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.WebCamImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t616  WebCamImpl_GetVideoTextureInfo_m4621 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamImpl::IsRendererDirty()
extern "C" bool WebCamImpl_IsRendererDirty_m4622 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::OnDestroy()
extern "C" void WebCamImpl_OnDestroy_m4623 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamImpl::Update()
extern "C" void WebCamImpl_Update_m4624 (WebCamImpl_t674 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

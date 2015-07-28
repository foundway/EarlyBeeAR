#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CameraDeviceImpl
struct CameraDeviceImpl_t675;
// Vuforia.WebCamImpl
struct WebCamImpl_t674;
// Vuforia.Image
struct Image_t632;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image>
struct Dictionary_2_t672;
// Vuforia.CameraDevice/CameraDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.CameraDevice/CameraDeviceMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
// Vuforia.CameraDevice/FocusMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"
// Vuforia.Image/PIXEL_FORMAT
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_Image_PIXEL_FORMAT.h"

// Vuforia.WebCamImpl Vuforia.CameraDeviceImpl::get_WebCam()
extern "C" WebCamImpl_t674 * CameraDeviceImpl_get_WebCam_m3388 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::get_CameraReady()
extern "C" bool CameraDeviceImpl_get_CameraReady_m3389 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Init(Vuforia.CameraDevice/CameraDirection)
extern "C" bool CameraDeviceImpl_Init_m3390 (CameraDeviceImpl_t675 * __this, int32_t ___cameraDirection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Deinit()
extern "C" bool CameraDeviceImpl_Deinit_m3391 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Start()
extern "C" bool CameraDeviceImpl_Start_m3392 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::Stop()
extern "C" bool CameraDeviceImpl_Stop_m3393 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode()
extern "C" VideoModeData_t630  CameraDeviceImpl_GetVideoMode_m3394 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDeviceImpl::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" VideoModeData_t630  CameraDeviceImpl_GetVideoMode_m3395 (CameraDeviceImpl_t675 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" bool CameraDeviceImpl_SelectVideoMode_m3396 (CameraDeviceImpl_t675 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
extern "C" bool CameraDeviceImpl_GetSelectedVideoMode_m3397 (CameraDeviceImpl_t675 * __this, int32_t* ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFlashTorchMode(System.Boolean)
extern "C" bool CameraDeviceImpl_SetFlashTorchMode_m3398 (CameraDeviceImpl_t675 * __this, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" bool CameraDeviceImpl_SetFocusMode_m3399 (CameraDeviceImpl_t675 * __this, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" bool CameraDeviceImpl_SetFrameFormat_m3400 (CameraDeviceImpl_t675 * __this, int32_t ___format, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.CameraDeviceImpl::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
extern "C" Image_t632 * CameraDeviceImpl_GetCameraImage_m3401 (CameraDeviceImpl_t675 * __this, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDeviceImpl::GetCameraDirection()
extern "C" int32_t CameraDeviceImpl_GetCameraDirection_m3402 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<Vuforia.Image/PIXEL_FORMAT,Vuforia.Image> Vuforia.CameraDeviceImpl::GetAllImages()
extern "C" Dictionary_2_t672 * CameraDeviceImpl_GetAllImages_m3403 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDeviceImpl::IsDirty()
extern "C" bool CameraDeviceImpl_IsDirty_m3404 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ResetDirtyFlag()
extern "C" void CameraDeviceImpl_ResetDirtyFlag_m3405 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.ctor()
extern "C" void CameraDeviceImpl__ctor_m3406 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::ForceFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
extern "C" void CameraDeviceImpl_ForceFrameFormat_m3407 (CameraDeviceImpl_t675 * __this, int32_t ___format, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::InitCameraDevice(System.Int32)
extern "C" int32_t CameraDeviceImpl_InitCameraDevice_m3408 (CameraDeviceImpl_t675 * __this, int32_t ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::DeinitCameraDevice()
extern "C" int32_t CameraDeviceImpl_DeinitCameraDevice_m3409 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StartCameraDevice()
extern "C" int32_t CameraDeviceImpl_StartCameraDevice_m3410 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.CameraDeviceImpl::StopCameraDevice()
extern "C" int32_t CameraDeviceImpl_StopCameraDevice_m3411 (CameraDeviceImpl_t675 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDeviceImpl::.cctor()
extern "C" void CameraDeviceImpl__cctor_m3412 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

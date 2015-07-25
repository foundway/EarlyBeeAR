#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CameraDevice
struct CameraDevice_t631;
// Vuforia.Image
struct Image_t632;
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

// Vuforia.CameraDevice Vuforia.CameraDevice::get_Instance()
extern "C" CameraDevice_t631 * CameraDevice_get_Instance_m3200 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CameraDevice::Init(Vuforia.CameraDevice/CameraDirection)
// System.Boolean Vuforia.CameraDevice::Deinit()
// System.Boolean Vuforia.CameraDevice::Start()
// System.Boolean Vuforia.CameraDevice::Stop()
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::GetVideoMode()
// Vuforia.CameraDevice/VideoModeData Vuforia.CameraDevice::GetVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
// System.Boolean Vuforia.CameraDevice::SelectVideoMode(Vuforia.CameraDevice/CameraDeviceMode)
// System.Boolean Vuforia.CameraDevice::GetSelectedVideoMode(Vuforia.CameraDevice/CameraDeviceMode&)
// System.Boolean Vuforia.CameraDevice::SetFlashTorchMode(System.Boolean)
// System.Boolean Vuforia.CameraDevice::SetFocusMode(Vuforia.CameraDevice/FocusMode)
// System.Boolean Vuforia.CameraDevice::SetFrameFormat(Vuforia.Image/PIXEL_FORMAT,System.Boolean)
// Vuforia.Image Vuforia.CameraDevice::GetCameraImage(Vuforia.Image/PIXEL_FORMAT)
// Vuforia.CameraDevice/CameraDirection Vuforia.CameraDevice::GetCameraDirection()
// System.Void Vuforia.CameraDevice::.ctor()
extern "C" void CameraDevice__ctor_m3201 (CameraDevice_t631 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CameraDevice::.cctor()
extern "C" void CameraDevice__cctor_m3202 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

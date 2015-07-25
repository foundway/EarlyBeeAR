#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t751;
// Vuforia.WordList
struct WordList_t749;
// Vuforia.TextTrackerImpl/UpDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.RectangleIntData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleIntData.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C" WordList_t749 * TextTrackerImpl_get_WordList_m3622 (TextTrackerImpl_t751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C" bool TextTrackerImpl_Start_m3623 (TextTrackerImpl_t751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C" void TextTrackerImpl_Stop_m3624 (TextTrackerImpl_t751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool TextTrackerImpl_SetRegionOfInterest_m3625 (TextTrackerImpl_t751 * __this, Rect_t62  ___detectionRegion, Rect_t62  ___trackingRegion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C" bool TextTrackerImpl_GetRegionOfInterest_m3626 (TextTrackerImpl_t751 * __this, Rect_t62 * ___detectionRegion, Rect_t62 * ___trackingRegion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Rect_t62  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m3627 (TextTrackerImpl_t751 * __this, RectangleIntData_t659  ___camSpaceRectData, Rect_t62  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t630  ___videoModeData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C" int32_t TextTrackerImpl_get_CurrentUpDirection_m3628 (TextTrackerImpl_t751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C" void TextTrackerImpl__ctor_m3629 (TextTrackerImpl_t751 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

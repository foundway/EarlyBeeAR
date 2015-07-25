#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRendererImpl
struct QCARRendererImpl_t733;
// UnityEngine.Texture2D
struct Texture2D_t368;
// Vuforia.QCARRenderer/VideoBGCfgData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB_0.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"
// Vuforia.QCARRendererImpl/RenderEvent
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRendererImpl_Re.h"

// UnityEngine.Texture2D Vuforia.QCARRendererImpl::get_VideoBackgroundTexture()
extern "C" Texture2D_t368 * QCARRendererImpl_get_VideoBackgroundTexture_m3563 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoBGCfgData Vuforia.QCARRendererImpl::GetVideoBackgroundConfig()
extern "C" VideoBGCfgData_t731  QCARRendererImpl_GetVideoBackgroundConfig_m3564 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::ClearVideoBackgroundConfig()
extern "C" void QCARRendererImpl_ClearVideoBackgroundConfig_m3565 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::SetVideoBackgroundConfig(Vuforia.QCARRenderer/VideoBGCfgData)
extern "C" void QCARRendererImpl_SetVideoBackgroundConfig_m3566 (QCARRendererImpl_t733 * __this, VideoBGCfgData_t731  ___config, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C" bool QCARRendererImpl_SetVideoBackgroundTexture_m3567 (QCARRendererImpl_t733 * __this, Texture2D_t368 * ___texture, int32_t ___nativeTextureID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C" bool QCARRendererImpl_IsVideoBackgroundInfoAvailable_m3568 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.QCARRendererImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t616  QCARRendererImpl_GetVideoTextureInfo_m3569 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::Pause(System.Boolean)
extern "C" void QCARRendererImpl_Pause_m3570 (QCARRendererImpl_t733 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::UnityRenderEvent(Vuforia.QCARRendererImpl/RenderEvent)
extern "C" void QCARRendererImpl_UnityRenderEvent_m3571 (QCARRendererImpl_t733 * __this, int32_t ___renderEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::.ctor()
extern "C" void QCARRendererImpl__ctor_m3572 (QCARRendererImpl_t733 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

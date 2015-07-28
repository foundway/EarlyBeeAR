#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamTexture
struct WebCamTexture_t754;
// System.String
struct String_t;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t932;

// System.Void UnityEngine.WebCamTexture::.ctor()
extern "C" void WebCamTexture__ctor_m5200 (WebCamTexture_t754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Internal_CreateWebCamTexture(UnityEngine.WebCamTexture,System.String,System.Int32,System.Int32,System.Int32)
extern "C" void WebCamTexture_Internal_CreateWebCamTexture_m6683 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, String_t* ___scriptingDevice, int32_t ___requestedWidth, int32_t ___requestedHeight, int32_t ___maxFramerate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" void WebCamTexture_Play_m5205 (WebCamTexture_t754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Play(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Play_m6684 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::Stop()
extern "C" void WebCamTexture_Stop_m5206 (WebCamTexture_t754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::INTERNAL_CALL_Stop(UnityEngine.WebCamTexture)
extern "C" void WebCamTexture_INTERNAL_CALL_Stop_m6685 (Object_t * __this /* static, unused */, WebCamTexture_t754 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_isPlaying()
extern "C" bool WebCamTexture_get_isPlaying_m5199 (WebCamTexture_t754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_deviceName(System.String)
extern "C" void WebCamTexture_set_deviceName_m5201 (WebCamTexture_t754 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedFPS(System.Single)
extern "C" void WebCamTexture_set_requestedFPS_m5202 (WebCamTexture_t754 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedWidth(System.Int32)
extern "C" void WebCamTexture_set_requestedWidth_m5203 (WebCamTexture_t754 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WebCamTexture::set_requestedHeight(System.Int32)
extern "C" void WebCamTexture_set_requestedHeight_m5204 (WebCamTexture_t754 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" WebCamDeviceU5BU5D_t932* WebCamTexture_get_devices_m5544 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
extern "C" bool WebCamTexture_get_didUpdateThisFrame_m5198 (WebCamTexture_t754 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

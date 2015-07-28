#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.NullWebCamTexAdaptor
struct NullWebCamTexAdaptor_t699;
// UnityEngine.Texture
struct Texture_t58;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Boolean Vuforia.NullWebCamTexAdaptor::get_DidUpdateThisFrame()
extern "C" bool NullWebCamTexAdaptor_get_DidUpdateThisFrame_m3511 (NullWebCamTexAdaptor_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.NullWebCamTexAdaptor::get_IsPlaying()
extern "C" bool NullWebCamTexAdaptor_get_IsPlaying_m3512 (NullWebCamTexAdaptor_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.NullWebCamTexAdaptor::get_Texture()
extern "C" Texture_t58 * NullWebCamTexAdaptor_get_Texture_m3513 (NullWebCamTexAdaptor_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::.ctor(System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void NullWebCamTexAdaptor__ctor_m3514 (NullWebCamTexAdaptor_t699 * __this, int32_t ___requestedFPS, Vec2I_t701  ___requestedTextureSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::Play()
extern "C" void NullWebCamTexAdaptor_Play_m3515 (NullWebCamTexAdaptor_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.NullWebCamTexAdaptor::Stop()
extern "C" void NullWebCamTexAdaptor_Stop_m3516 (NullWebCamTexAdaptor_t699 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

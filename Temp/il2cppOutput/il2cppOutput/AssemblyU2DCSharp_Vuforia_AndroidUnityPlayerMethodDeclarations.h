#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.AndroidUnityPlayer
struct AndroidUnityPlayer_t123;
// System.String
struct String_t;
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"

// System.Void Vuforia.AndroidUnityPlayer::.ctor()
extern "C" void AndroidUnityPlayer__ctor_m427 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibraries()
extern "C" void AndroidUnityPlayer_LoadNativeLibraries_m428 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializePlatform()
extern "C" void AndroidUnityPlayer_InitializePlatform_m429 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARUnity/InitError Vuforia.AndroidUnityPlayer::Start(System.String)
extern "C" int32_t AndroidUnityPlayer_Start_m430 (AndroidUnityPlayer_t123 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Update()
extern "C" void AndroidUnityPlayer_Update_m431 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnPause()
extern "C" void AndroidUnityPlayer_OnPause_m432 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnResume()
extern "C" void AndroidUnityPlayer_OnResume_m433 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::OnDestroy()
extern "C" void AndroidUnityPlayer_OnDestroy_m434 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::Dispose()
extern "C" void AndroidUnityPlayer_Dispose_m435 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::LoadNativeLibrariesFromJava()
extern "C" void AndroidUnityPlayer_LoadNativeLibrariesFromJava_m436 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitAndroidPlatform()
extern "C" void AndroidUnityPlayer_InitAndroidPlatform_m437 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.AndroidUnityPlayer::InitQCAR(System.String)
extern "C" int32_t AndroidUnityPlayer_InitQCAR_m438 (AndroidUnityPlayer_t123 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::InitializeSurface()
extern "C" void AndroidUnityPlayer_InitializeSurface_m439 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::ResetUnityScreenOrientation()
extern "C" void AndroidUnityPlayer_ResetUnityScreenOrientation_m440 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.AndroidUnityPlayer::CheckOrientation()
extern "C" void AndroidUnityPlayer_CheckOrientation_m441 (AndroidUnityPlayer_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.IOSUnityPlayer
struct IOSUnityPlayer_t125;
// System.String
struct String_t;
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"

// System.Void Vuforia.IOSUnityPlayer::.ctor()
extern "C" void IOSUnityPlayer__ctor_m445 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::LoadNativeLibraries()
extern "C" void IOSUnityPlayer_LoadNativeLibraries_m446 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializePlatform()
extern "C" void IOSUnityPlayer_InitializePlatform_m447 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARUnity/InitError Vuforia.IOSUnityPlayer::Start(System.String)
extern "C" int32_t IOSUnityPlayer_Start_m448 (IOSUnityPlayer_t125 * __this, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Update()
extern "C" void IOSUnityPlayer_Update_m449 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::Dispose()
extern "C" void IOSUnityPlayer_Dispose_m450 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnPause()
extern "C" void IOSUnityPlayer_OnPause_m451 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnResume()
extern "C" void IOSUnityPlayer_OnResume_m452 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::OnDestroy()
extern "C" void IOSUnityPlayer_OnDestroy_m453 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::InitializeSurface()
extern "C" void IOSUnityPlayer_InitializeSurface_m454 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::SetUnityScreenOrientation()
extern "C" void IOSUnityPlayer_SetUnityScreenOrientation_m455 (IOSUnityPlayer_t125 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setPlatFormNative()
extern "C" void IOSUnityPlayer_setPlatFormNative_m456 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.IOSUnityPlayer::initQCARiOS(System.Int32,System.String)
extern "C" int32_t IOSUnityPlayer_initQCARiOS_m457 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, String_t* ___licenseKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.IOSUnityPlayer::setSurfaceOrientationiOS(System.Int32)
extern "C" void IOSUnityPlayer_setSurfaceOrientationiOS_m458 (Object_t * __this /* static, unused */, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;

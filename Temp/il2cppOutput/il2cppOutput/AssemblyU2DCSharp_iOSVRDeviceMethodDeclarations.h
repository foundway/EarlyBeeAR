#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iOSVRDevice
struct iOSVRDevice_t100;
// System.Collections.Generic.List`1<System.String>
struct List_1_t95;

// System.Void iOSVRDevice::.ctor()
extern "C" void iOSVRDevice__ctor_m381 (iOSVRDevice_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSVRDevice::SupportsNativeDistortionCorrection(System.Collections.Generic.List`1<System.String>)
extern "C" bool iOSVRDevice_SupportsNativeDistortionCorrection_m382 (iOSVRDevice_t100 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSVRDevice::SupportsNativeUILayer(System.Collections.Generic.List`1<System.String>)
extern "C" bool iOSVRDevice_SupportsNativeUILayer_m383 (iOSVRDevice_t100 * __this, List_1_t95 * ___diagnostics, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::SetVRModeEnabled(System.Boolean)
extern "C" void iOSVRDevice_SetVRModeEnabled_m384 (iOSVRDevice_t100 * __this, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::Init()
extern "C" void iOSVRDevice_Init_m385 (iOSVRDevice_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::PostRender(System.Boolean)
extern "C" void iOSVRDevice_PostRender_m386 (iOSVRDevice_t100 * __this, bool ___vrMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::OnFocus(System.Boolean)
extern "C" void iOSVRDevice_OnFocus_m387 (iOSVRDevice_t100 * __this, bool ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::OnPause(System.Boolean)
extern "C" void iOSVRDevice_OnPause_m388 (iOSVRDevice_t100 * __this, bool ___pause, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::LaunchSettingsDialog()
extern "C" void iOSVRDevice_LaunchSettingsDialog_m389 (iOSVRDevice_t100 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSVRDevice::isOpenGLAPI()
extern "C" bool iOSVRDevice_isOpenGLAPI_m390 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::setVRModeEnabled(System.Boolean)
extern "C" void iOSVRDevice_setVRModeEnabled_m391 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::setSyncWithCardboardEnabled(System.Boolean)
extern "C" void iOSVRDevice_setSyncWithCardboardEnabled_m392 (Object_t * __this /* static, unused */, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::readProfile()
extern "C" void iOSVRDevice_readProfile_m393 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSVRDevice::isOnboardingDone()
extern "C" bool iOSVRDevice_isOnboardingDone_m394 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::launchOnboardingDialog()
extern "C" void iOSVRDevice_launchOnboardingDialog_m395 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSVRDevice::launchSettingsDialog()
extern "C" void iOSVRDevice_launchSettingsDialog_m396 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

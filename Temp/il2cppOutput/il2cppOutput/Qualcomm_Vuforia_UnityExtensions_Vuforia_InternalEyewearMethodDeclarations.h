#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewear
struct InternalEyewear_t650;
// Vuforia.InternalEyewearCalibrationProfileManager
struct InternalEyewearCalibrationProfileManager_t615;
// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t617;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Vuforia.InternalEyewear/EyeID
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_InternalEyewear_Eye.h"

// Vuforia.InternalEyewear Vuforia.InternalEyewear::get_Instance()
extern "C" InternalEyewear_t650 * InternalEyewear_get_Instance_m3291 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsSupportedDeviceDetected()
extern "C" bool InternalEyewear_IsSupportedDeviceDetected_m3292 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsSeeThru()
extern "C" bool InternalEyewear_IsSeeThru_m3293 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.InternalEyewear::GetScreenOrientation()
extern "C" int32_t InternalEyewear_GetScreenOrientation_m3294 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoCapable()
extern "C" bool InternalEyewear_IsStereoCapable_m3295 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoEnabled()
extern "C" bool InternalEyewear_IsStereoEnabled_m3296 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::IsStereoGLOnly()
extern "C" bool InternalEyewear_IsStereoGLOnly_m3297 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewear::SetStereo(System.Boolean)
extern "C" bool InternalEyewear_SetStereo_m3298 (InternalEyewear_t650 * __this, bool ___enable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewear::GetDefaultSceneScale()
extern "C" float InternalEyewear_GetDefaultSceneScale_m3299 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InternalEyewearCalibrationProfileManager Vuforia.InternalEyewear::getProfileManager()
extern "C" InternalEyewearCalibrationProfileManager_t615 * InternalEyewear_getProfileManager_m3300 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.InternalEyewearUserCalibrator Vuforia.InternalEyewear::getCalibrator()
extern "C" InternalEyewearUserCalibrator_t617 * InternalEyewear_getCalibrator_m3301 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.InternalEyewear::GetProjectionMatrix(Vuforia.InternalEyewear/EyeID,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t27  InternalEyewear_GetProjectionMatrix_m3302 (InternalEyewear_t650 * __this, int32_t ___eyeID, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.InternalEyewear::GetProjectionMatrix(Vuforia.InternalEyewear/EyeID,System.Int32,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t27  InternalEyewear_GetProjectionMatrix_m3303 (InternalEyewear_t650 * __this, int32_t ___eyeID, int32_t ___profileID, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewear::.ctor()
extern "C" void InternalEyewear__ctor_m3304 (InternalEyewear_t650 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewear::.cctor()
extern "C" void InternalEyewear__cctor_m3305 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

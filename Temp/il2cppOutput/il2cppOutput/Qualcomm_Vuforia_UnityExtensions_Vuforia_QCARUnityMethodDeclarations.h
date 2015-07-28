#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARUnity
struct QCARUnity_t824;
// Vuforia.QCARUnity/QCARHint
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_QCARHint.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.QCARUnity::Deinit()
extern "C" void QCARUnity_Deinit_m972 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::IsRendererDirty()
extern "C" bool QCARUnity_IsRendererDirty_m4639 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(Vuforia.QCARUnity/QCARHint,System.Int32)
extern "C" bool QCARUnity_SetHint_m4640 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnity::SetHint(System.Int32,System.Int32)
extern "C" bool QCARUnity_SetHint_m4641 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.QCARUnity::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t27  QCARUnity_GetProjectionGL_m4642 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnPause()
extern "C" void QCARUnity_OnPause_m970 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::OnResume()
extern "C" void QCARUnity_OnResume_m971 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnity::SetRendererDirty()
extern "C" void QCARUnity_SetRendererDirty_m4643 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

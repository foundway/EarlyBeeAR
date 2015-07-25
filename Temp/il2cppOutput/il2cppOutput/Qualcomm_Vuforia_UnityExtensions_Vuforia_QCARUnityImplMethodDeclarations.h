#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARUnityImpl
struct QCARUnityImpl_t735;
// Vuforia.QCARUnity/QCARHint
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_QCARHint.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"

// System.Void Vuforia.QCARUnityImpl::Deinit()
extern "C" void QCARUnityImpl_Deinit_m3573 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::IsRendererDirty()
extern "C" bool QCARUnityImpl_IsRendererDirty_m3574 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::SetHint(Vuforia.QCARUnity/QCARHint,System.Int32)
extern "C" bool QCARUnityImpl_SetHint_m3575 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARUnityImpl::SetHint(System.Int32,System.Int32)
extern "C" bool QCARUnityImpl_SetHint_m3576 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Vuforia.QCARUnityImpl::GetProjectionGL(System.Single,System.Single,UnityEngine.ScreenOrientation)
extern "C" Matrix4x4_t27  QCARUnityImpl_GetProjectionGL_m3577 (Object_t * __this /* static, unused */, float ___nearPlane, float ___farPlane, int32_t ___screenOrientation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::SetApplicationEnvironment()
extern "C" void QCARUnityImpl_SetApplicationEnvironment_m3578 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::OnPause()
extern "C" void QCARUnityImpl_OnPause_m3579 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::OnResume()
extern "C" void QCARUnityImpl_OnResume_m3580 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::SetRendererDirty()
extern "C" void QCARUnityImpl_SetRendererDirty_m3581 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARUnityImpl::.cctor()
extern "C" void QCARUnityImpl__cctor_m3582 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;

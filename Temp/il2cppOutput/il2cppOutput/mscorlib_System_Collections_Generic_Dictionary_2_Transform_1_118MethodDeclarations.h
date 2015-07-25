#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
struct Transform_1_t4127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m26672_gshared (Transform_1_t4127 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m26672(__this, ___object, ___method, method) (( void (*) (Transform_1_t4127 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m26672_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
extern "C" ProfileData_t817  Transform_1_Invoke_m26673_gshared (Transform_1_t4127 * __this, Object_t * ___key, ProfileData_t817  ___value, MethodInfo* method);
#define Transform_1_Invoke_m26673(__this, ___key, ___value, method) (( ProfileData_t817  (*) (Transform_1_t4127 *, Object_t *, ProfileData_t817 , MethodInfo*))Transform_1_Invoke_m26673_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m26674_gshared (Transform_1_t4127 * __this, Object_t * ___key, ProfileData_t817  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m26674(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4127 *, Object_t *, ProfileData_t817 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m26674_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
extern "C" ProfileData_t817  Transform_1_EndInvoke_m26675_gshared (Transform_1_t4127 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m26675(__this, ___result, method) (( ProfileData_t817  (*) (Transform_1_t4127 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m26675_gshared)(__this, ___result, method)

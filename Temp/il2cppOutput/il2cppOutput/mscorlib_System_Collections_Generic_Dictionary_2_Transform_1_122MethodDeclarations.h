#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
struct Transform_1_t4140;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_118MethodDeclarations.h"
#define Transform_1__ctor_m26763(__this, ___object, ___method, method) (( void (*) (Transform_1_t4140 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m26672_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m26764(__this, ___key, ___value, method) (( ProfileData_t817  (*) (Transform_1_t4140 *, String_t*, ProfileData_t817 , MethodInfo*))Transform_1_Invoke_m26673_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m26765(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4140 *, String_t*, ProfileData_t817 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m26674_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Vuforia.WebCamProfile/ProfileData,Vuforia.WebCamProfile/ProfileData>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m26766(__this, ___result, method) (( ProfileData_t817  (*) (Transform_1_t4140 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m26675_gshared)(__this, ___result, method)

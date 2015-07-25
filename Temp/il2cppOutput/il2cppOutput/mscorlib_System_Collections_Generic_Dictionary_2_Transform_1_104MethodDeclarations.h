#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>
struct Transform_1_t4043;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25734_gshared (Transform_1_t4043 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25734(__this, ___object, ___method, method) (( void (*) (Transform_1_t4043 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25734_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m25735_gshared (Transform_1_t4043 * __this, int32_t ___key, TrackableResultData_t710  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25735(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t4043 *, int32_t, TrackableResultData_t710 , MethodInfo*))Transform_1_Invoke_m25735_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25736_gshared (Transform_1_t4043 * __this, int32_t ___key, TrackableResultData_t710  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25736(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4043 *, int32_t, TrackableResultData_t710 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25736_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m25737_gshared (Transform_1_t4043 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25737(__this, ___result, method) (( int32_t (*) (Transform_1_t4043 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25737_gshared)(__this, ___result, method)

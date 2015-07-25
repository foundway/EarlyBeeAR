#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>
struct Transform_1_t4037;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25761_gshared (Transform_1_t4037 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25761(__this, ___object, ___method, method) (( void (*) (Transform_1_t4037 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25761_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m25762_gshared (Transform_1_t4037 * __this, int32_t ___key, TrackableResultData_t710  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25762(__this, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Transform_1_t4037 *, int32_t, TrackableResultData_t710 , MethodInfo*))Transform_1_Invoke_m25762_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25763_gshared (Transform_1_t4037 * __this, int32_t ___key, TrackableResultData_t710  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25763(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4037 *, int32_t, TrackableResultData_t710 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25763_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m25764_gshared (Transform_1_t4037 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25764(__this, ___result, method) (( DictionaryEntry_t1610  (*) (Transform_1_t4037 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25764_gshared)(__this, ___result, method)

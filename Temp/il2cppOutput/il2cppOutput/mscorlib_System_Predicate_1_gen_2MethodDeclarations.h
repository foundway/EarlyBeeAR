#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>
struct Predicate_1_t870;
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

// System.Void System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m5117_gshared (Predicate_1_t870 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m5117(__this, ___object, ___method, method) (( void (*) (Predicate_1_t870 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m5117_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m22825_gshared (Predicate_1_t870 * __this, TrackableResultData_t710  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m22825(__this, ___obj, method) (( bool (*) (Predicate_1_t870 *, TrackableResultData_t710 , MethodInfo*))Predicate_1_Invoke_m22825_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m22826_gshared (Predicate_1_t870 * __this, TrackableResultData_t710  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m22826(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t870 *, TrackableResultData_t710 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m22826_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.QCARManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m22827_gshared (Predicate_1_t870 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m22827(__this, ___result, method) (( bool (*) (Predicate_1_t870 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m22827_gshared)(__this, ___result, method)

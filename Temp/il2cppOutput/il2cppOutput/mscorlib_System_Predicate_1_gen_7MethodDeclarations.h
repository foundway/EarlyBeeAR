#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Int32>
struct Predicate_1_t3143;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m16096_gshared (Predicate_1_t3143 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m16096(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3143 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m16096_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Int32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m16097_gshared (Predicate_1_t3143 * __this, int32_t ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m16097(__this, ___obj, method) (( bool (*) (Predicate_1_t3143 *, int32_t, MethodInfo*))Predicate_1_Invoke_m16097_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Int32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m16098_gshared (Predicate_1_t3143 * __this, int32_t ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m16098(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3143 *, int32_t, AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m16098_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m16099_gshared (Predicate_1_t3143 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m16099(__this, ___result, method) (( bool (*) (Predicate_1_t3143 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m16099_gshared)(__this, ___result, method)

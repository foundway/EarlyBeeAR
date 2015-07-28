#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t4355;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m29085_gshared (Predicate_1_t4355 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m29085(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4355 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m29085_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29086_gshared (Predicate_1_t4355 * __this, UICharInfo_t525  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m29086(__this, ___obj, method) (( bool (*) (Predicate_1_t4355 *, UICharInfo_t525 , MethodInfo*))Predicate_1_Invoke_m29086_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m29087_gshared (Predicate_1_t4355 * __this, UICharInfo_t525  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m29087(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4355 *, UICharInfo_t525 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m29087_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m29088_gshared (Predicate_1_t4355 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m29088(__this, ___result, method) (( bool (*) (Predicate_1_t4355 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m29088_gshared)(__this, ___result, method)

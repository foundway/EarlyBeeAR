#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t4364;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m29228_gshared (Predicate_1_t4364 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m29228(__this, ___object, ___method, method) (( void (*) (Predicate_1_t4364 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m29228_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m29229_gshared (Predicate_1_t4364 * __this, UILineInfo_t523  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m29229(__this, ___obj, method) (( bool (*) (Predicate_1_t4364 *, UILineInfo_t523 , MethodInfo*))Predicate_1_Invoke_m29229_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m29230_gshared (Predicate_1_t4364 * __this, UILineInfo_t523  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m29230(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t4364 *, UILineInfo_t523 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m29230_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m29231_gshared (Predicate_1_t4364 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m29231(__this, ___result, method) (( bool (*) (Predicate_1_t4364 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m29231_gshared)(__this, ___result, method)

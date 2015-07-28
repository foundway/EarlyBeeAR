#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t1296;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1217;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m7481(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1296 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15624_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
#define Predicate_1_Invoke_m31860(__this, ___obj, method) (( bool (*) (Predicate_1_t1296 *, BaseInvokableCall_t1217 *, MethodInfo*))Predicate_1_Invoke_m15625_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m31861(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1296 *, BaseInvokableCall_t1217 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15626_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m31862(__this, ___result, method) (( bool (*) (Predicate_1_t1296 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15627_gshared)(__this, ___result, method)

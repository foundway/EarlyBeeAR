#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>
struct Predicate_1_t3284;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t47;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m17520(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3284 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m15624_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::Invoke(T)
#define Predicate_1_Invoke_m17521(__this, ___obj, method) (( bool (*) (Predicate_1_t3284 *, BaseInputModule_t47 *, MethodInfo*))Predicate_1_Invoke_m15625_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m17522(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3284 *, BaseInputModule_t47 *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m15626_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.BaseInputModule>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m17523(__this, ___result, method) (( bool (*) (Predicate_1_t3284 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m15627_gshared)(__this, ___result, method)

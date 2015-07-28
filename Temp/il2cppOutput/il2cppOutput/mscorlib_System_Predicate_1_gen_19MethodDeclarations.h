#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t3463;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Predicate`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m19363_gshared (Predicate_1_t3463 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Predicate_1__ctor_m19363(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3463 *, Object_t *, IntPtr_t, MethodInfo*))Predicate_1__ctor_m19363_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m19364_gshared (Predicate_1_t3463 * __this, UIVertex_t395  ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m19364(__this, ___obj, method) (( bool (*) (Predicate_1_t3463 *, UIVertex_t395 , MethodInfo*))Predicate_1_Invoke_m19364_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UIVertex>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m19365_gshared (Predicate_1_t3463 * __this, UIVertex_t395  ___obj, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m19365(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3463 *, UIVertex_t395 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Predicate_1_BeginInvoke_m19365_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m19366_gshared (Predicate_1_t3463 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m19366(__this, ___result, method) (( bool (*) (Predicate_1_t3463 *, Object_t *, MethodInfo*))Predicate_1_EndInvoke_m19366_gshared)(__this, ___result, method)

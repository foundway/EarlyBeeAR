#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t3466;
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

// System.Void System.Comparison`1<UnityEngine.UIVertex>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m19373_gshared (Comparison_1_t3466 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m19373(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3466 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m19373_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m19374_gshared (Comparison_1_t3466 * __this, UIVertex_t395  ___x, UIVertex_t395  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m19374(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3466 *, UIVertex_t395 , UIVertex_t395 , MethodInfo*))Comparison_1_Invoke_m19374_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UIVertex>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m19375_gshared (Comparison_1_t3466 * __this, UIVertex_t395  ___x, UIVertex_t395  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m19375(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3466 *, UIVertex_t395 , UIVertex_t395 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m19375_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UIVertex>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m19376_gshared (Comparison_1_t3466 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m19376(__this, ___result, method) (( int32_t (*) (Comparison_1_t3466 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m19376_gshared)(__this, ___result, method)

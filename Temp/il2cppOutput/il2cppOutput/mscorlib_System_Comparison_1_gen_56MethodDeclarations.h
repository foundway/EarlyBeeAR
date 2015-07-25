#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t4358;
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

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m29095_gshared (Comparison_1_t4358 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m29095(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4358 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m29095_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m29096_gshared (Comparison_1_t4358 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m29096(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4358 *, UICharInfo_t525 , UICharInfo_t525 , MethodInfo*))Comparison_1_Invoke_m29096_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m29097_gshared (Comparison_1_t4358 * __this, UICharInfo_t525  ___x, UICharInfo_t525  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m29097(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4358 *, UICharInfo_t525 , UICharInfo_t525 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m29097_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m29098_gshared (Comparison_1_t4358 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m29098(__this, ___result, method) (( int32_t (*) (Comparison_1_t4358 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m29098_gshared)(__this, ___result, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>
struct Comparison_1_t4087;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.TargetFinder/TargetSearchResult
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TargetFinder_Target.h"

// System.Void System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m26207_gshared (Comparison_1_t4087 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m26207(__this, ___object, ___method, method) (( void (*) (Comparison_1_t4087 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m26207_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m26208_gshared (Comparison_1_t4087 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m26208(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t4087 *, TargetSearchResult_t803 , TargetSearchResult_t803 , MethodInfo*))Comparison_1_Invoke_m26208_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m26209_gshared (Comparison_1_t4087 * __this, TargetSearchResult_t803  ___x, TargetSearchResult_t803  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m26209(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t4087 *, TargetSearchResult_t803 , TargetSearchResult_t803 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m26209_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<Vuforia.TargetFinder/TargetSearchResult>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m26210_gshared (Comparison_1_t4087 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m26210(__this, ___result, method) (( int32_t (*) (Comparison_1_t4087 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m26210_gshared)(__this, ___result, method)

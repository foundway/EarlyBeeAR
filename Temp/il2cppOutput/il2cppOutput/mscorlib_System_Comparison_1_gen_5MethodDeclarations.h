﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<MazeCoord>
struct Comparison_1_t3127;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// MazeCoord
#include "AssemblyU2DCSharp_MazeCoord.h"

// System.Void System.Comparison`1<MazeCoord>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15943_gshared (Comparison_1_t3127 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Comparison_1__ctor_m15943(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3127 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15943_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<MazeCoord>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15944_gshared (Comparison_1_t3127 * __this, MazeCoord_t28  ___x, MazeCoord_t28  ___y, MethodInfo* method);
#define Comparison_1_Invoke_m15944(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3127 *, MazeCoord_t28 , MazeCoord_t28 , MethodInfo*))Comparison_1_Invoke_m15944_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<MazeCoord>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15945_gshared (Comparison_1_t3127 * __this, MazeCoord_t28  ___x, MazeCoord_t28  ___y, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Comparison_1_BeginInvoke_m15945(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3127 *, MazeCoord_t28 , MazeCoord_t28 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15945_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<MazeCoord>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15946_gshared (Comparison_1_t3127 * __this, Object_t * ___result, MethodInfo* method);
#define Comparison_1_EndInvoke_m15946(__this, ___result, method) (( int32_t (*) (Comparison_1_t3127 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15946_gshared)(__this, ___result, method)
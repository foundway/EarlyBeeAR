﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Type>
struct Comparison_1_t3658;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Type>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m21349(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3658 *, Object_t *, IntPtr_t, MethodInfo*))Comparison_1__ctor_m15694_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Type>::Invoke(T,T)
#define Comparison_1_Invoke_m21350(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3658 *, Type_t *, Type_t *, MethodInfo*))Comparison_1_Invoke_m15695_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Type>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m21351(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3658 *, Type_t *, Type_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Comparison_1_BeginInvoke_m15696_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Type>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m21352(__this, ___result, method) (( int32_t (*) (Comparison_1_t3658 *, Object_t *, MethodInfo*))Comparison_1_EndInvoke_m15697_gshared)(__this, ___result, method)
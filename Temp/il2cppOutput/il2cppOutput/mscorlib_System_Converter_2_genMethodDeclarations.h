﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t4733;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m32477_gshared (Converter_2_t4733 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Converter_2__ctor_m32477(__this, ___object, ___method, method) (( void (*) (Converter_2_t4733 *, Object_t *, IntPtr_t, MethodInfo*))Converter_2__ctor_m32477_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m32478_gshared (Converter_2_t4733 * __this, Object_t * ___input, MethodInfo* method);
#define Converter_2_Invoke_m32478(__this, ___input, method) (( Object_t * (*) (Converter_2_t4733 *, Object_t *, MethodInfo*))Converter_2_Invoke_m32478_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m32479_gshared (Converter_2_t4733 * __this, Object_t * ___input, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Converter_2_BeginInvoke_m32479(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t4733 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))Converter_2_BeginInvoke_m32479_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m32480_gshared (Converter_2_t4733 * __this, Object_t * ___result, MethodInfo* method);
#define Converter_2_EndInvoke_m32480(__this, ___result, method) (( Object_t * (*) (Converter_2_t4733 *, Object_t *, MethodInfo*))Converter_2_EndInvoke_m32480_gshared)(__this, ___result, method)

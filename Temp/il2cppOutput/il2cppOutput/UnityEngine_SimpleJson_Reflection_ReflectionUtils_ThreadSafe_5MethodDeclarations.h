﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t4499;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadSafeDictionaryValueFactory_2__ctor_m30425_gshared (ThreadSafeDictionaryValueFactory_2_t4499 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2__ctor_m30425(__this, ___object, ___method, method) (( void (*) (ThreadSafeDictionaryValueFactory_2_t4499 *, Object_t *, IntPtr_t, MethodInfo*))ThreadSafeDictionaryValueFactory_2__ctor_m30425_gshared)(__this, ___object, ___method, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::Invoke(TKey)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_Invoke_m30427_gshared (ThreadSafeDictionaryValueFactory_2_t4499 * __this, Object_t * ___key, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_Invoke_m30427(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t4499 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_Invoke_m30427_gshared)(__this, ___key, method)
// System.IAsyncResult SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::BeginInvoke(TKey,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_BeginInvoke_m30429_gshared (ThreadSafeDictionaryValueFactory_2_t4499 * __this, Object_t * ___key, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_BeginInvoke_m30429(__this, ___key, ___callback, ___object, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t4499 *, Object_t *, AsyncCallback_t42 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_BeginInvoke_m30429_gshared)(__this, ___key, ___callback, ___object, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * ThreadSafeDictionaryValueFactory_2_EndInvoke_m30431_gshared (ThreadSafeDictionaryValueFactory_2_t4499 * __this, Object_t * ___result, MethodInfo* method);
#define ThreadSafeDictionaryValueFactory_2_EndInvoke_m30431(__this, ___result, method) (( Object_t * (*) (ThreadSafeDictionaryValueFactory_2_t4499 *, Object_t *, MethodInfo*))ThreadSafeDictionaryValueFactory_2_EndInvoke_m30431_gshared)(__this, ___result, method)

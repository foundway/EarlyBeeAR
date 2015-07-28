﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>
struct Transform_1_t4052;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25904_gshared (Transform_1_t4052 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25904(__this, ___object, ___method, method) (( void (*) (Transform_1_t4052 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25904_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1610  Transform_1_Invoke_m25905_gshared (Transform_1_t4052 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25905(__this, ___key, ___value, method) (( DictionaryEntry_t1610  (*) (Transform_1_t4052 *, int32_t, VirtualButtonData_t711 , MethodInfo*))Transform_1_Invoke_m25905_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25906_gshared (Transform_1_t4052 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25906(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4052 *, int32_t, VirtualButtonData_t711 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25906_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1610  Transform_1_EndInvoke_m25907_gshared (Transform_1_t4052 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25907(__this, ___result, method) (( DictionaryEntry_t1610  (*) (Transform_1_t4052 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25907_gshared)(__this, ___result, method)
﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Transform_1_t4062;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25900_gshared (Transform_1_t4062 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25900(__this, ___object, ___method, method) (( void (*) (Transform_1_t4062 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25900_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::Invoke(TKey,TValue)
extern "C" VirtualButtonData_t711  Transform_1_Invoke_m25901_gshared (Transform_1_t4062 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25901(__this, ___key, ___value, method) (( VirtualButtonData_t711  (*) (Transform_1_t4062 *, int32_t, VirtualButtonData_t711 , MethodInfo*))Transform_1_Invoke_m25901_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25902_gshared (Transform_1_t4062 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25902(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4062 *, int32_t, VirtualButtonData_t711 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25902_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,Vuforia.QCARManagerImpl/VirtualButtonData>::EndInvoke(System.IAsyncResult)
extern "C" VirtualButtonData_t711  Transform_1_EndInvoke_m25903_gshared (Transform_1_t4062 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25903(__this, ___result, method) (( VirtualButtonData_t711  (*) (Transform_1_t4062 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25903_gshared)(__this, ___result, method)
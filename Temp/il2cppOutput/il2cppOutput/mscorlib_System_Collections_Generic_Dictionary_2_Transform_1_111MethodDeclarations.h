#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>
struct Transform_1_t4063;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t41;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25908_gshared (Transform_1_t4063 * __this, Object_t * ___object, IntPtr_t ___method, MethodInfo* method);
#define Transform_1__ctor_m25908(__this, ___object, ___method, method) (( void (*) (Transform_1_t4063 *, Object_t *, IntPtr_t, MethodInfo*))Transform_1__ctor_m25908_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t4053  Transform_1_Invoke_m25909_gshared (Transform_1_t4063 * __this, int32_t ___key, VirtualButtonData_t711  ___value, MethodInfo* method);
#define Transform_1_Invoke_m25909(__this, ___key, ___value, method) (( KeyValuePair_2_t4053  (*) (Transform_1_t4063 *, int32_t, VirtualButtonData_t711 , MethodInfo*))Transform_1_Invoke_m25909_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25910_gshared (Transform_1_t4063 * __this, int32_t ___key, VirtualButtonData_t711  ___value, AsyncCallback_t42 * ___callback, Object_t * ___object, MethodInfo* method);
#define Transform_1_BeginInvoke_m25910(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4063 *, int32_t, VirtualButtonData_t711 , AsyncCallback_t42 *, Object_t *, MethodInfo*))Transform_1_BeginInvoke_m25910_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData,System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t4053  Transform_1_EndInvoke_m25911_gshared (Transform_1_t4063 * __this, Object_t * ___result, MethodInfo* method);
#define Transform_1_EndInvoke_m25911(__this, ___result, method) (( KeyValuePair_2_t4053  (*) (Transform_1_t4063 *, Object_t *, MethodInfo*))Transform_1_EndInvoke_m25911_gshared)(__this, ___result, method)

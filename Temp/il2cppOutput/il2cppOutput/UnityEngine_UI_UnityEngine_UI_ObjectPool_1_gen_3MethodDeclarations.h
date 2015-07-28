#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t3175;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3174;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m16406_gshared (ObjectPool_1_t3175 * __this, UnityAction_1_t3174 * ___actionOnGet, UnityAction_1_t3174 * ___actionOnRelease, MethodInfo* method);
#define ObjectPool_1__ctor_m16406(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t3175 *, UnityAction_1_t3174 *, UnityAction_1_t3174 *, MethodInfo*))ObjectPool_1__ctor_m16406_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m16408_gshared (ObjectPool_1_t3175 * __this, MethodInfo* method);
#define ObjectPool_1_get_countAll_m16408(__this, method) (( int32_t (*) (ObjectPool_1_t3175 *, MethodInfo*))ObjectPool_1_get_countAll_m16408_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m16410_gshared (ObjectPool_1_t3175 * __this, int32_t ___value, MethodInfo* method);
#define ObjectPool_1_set_countAll_m16410(__this, ___value, method) (( void (*) (ObjectPool_1_t3175 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16410_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m16412_gshared (ObjectPool_1_t3175 * __this, MethodInfo* method);
#define ObjectPool_1_get_countActive_m16412(__this, method) (( int32_t (*) (ObjectPool_1_t3175 *, MethodInfo*))ObjectPool_1_get_countActive_m16412_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m16414_gshared (ObjectPool_1_t3175 * __this, MethodInfo* method);
#define ObjectPool_1_get_countInactive_m16414(__this, method) (( int32_t (*) (ObjectPool_1_t3175 *, MethodInfo*))ObjectPool_1_get_countInactive_m16414_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m16416_gshared (ObjectPool_1_t3175 * __this, MethodInfo* method);
#define ObjectPool_1_Get_m16416(__this, method) (( Object_t * (*) (ObjectPool_1_t3175 *, MethodInfo*))ObjectPool_1_Get_m16416_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m16418_gshared (ObjectPool_1_t3175 * __this, Object_t * ___element, MethodInfo* method);
#define ObjectPool_1_Release_m16418(__this, ___element, method) (( void (*) (ObjectPool_1_t3175 *, Object_t *, MethodInfo*))ObjectPool_1_Release_m16418_gshared)(__this, ___element, method)

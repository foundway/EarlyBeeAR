#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct ObjectPool_1_t485;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Component>>
struct UnityAction_1_t486;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t475;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m3002(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t485 *, UnityAction_1_t486 *, UnityAction_1_t486 *, MethodInfo*))ObjectPool_1__ctor_m16406_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countAll()
#define ObjectPool_1_get_countAll_m20874(__this, method) (( int32_t (*) (ObjectPool_1_t485 *, MethodInfo*))ObjectPool_1_get_countAll_m16408_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m20875(__this, ___value, method) (( void (*) (ObjectPool_1_t485 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16410_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countActive()
#define ObjectPool_1_get_countActive_m20876(__this, method) (( int32_t (*) (ObjectPool_1_t485 *, MethodInfo*))ObjectPool_1_get_countActive_m16412_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m20877(__this, method) (( int32_t (*) (ObjectPool_1_t485 *, MethodInfo*))ObjectPool_1_get_countInactive_m16414_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Get()
#define ObjectPool_1_Get_m3004(__this, method) (( List_1_t475 * (*) (ObjectPool_1_t485 *, MethodInfo*))ObjectPool_1_Get_m16416_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Component>>::Release(T)
#define ObjectPool_1_Release_m3005(__this, ___element, method) (( void (*) (ObjectPool_1_t485 *, List_1_t475 *, MethodInfo*))ObjectPool_1_Release_m16418_gshared)(__this, ___element, method)

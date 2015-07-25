#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t481;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t482;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t484;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2997(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t481 *, UnityAction_1_t482 *, UnityAction_1_t482 *, MethodInfo*))ObjectPool_1__ctor_m16406_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m20846(__this, method) (( int32_t (*) (ObjectPool_1_t481 *, MethodInfo*))ObjectPool_1_get_countAll_m16408_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m20847(__this, ___value, method) (( void (*) (ObjectPool_1_t481 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16410_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m20848(__this, method) (( int32_t (*) (ObjectPool_1_t481 *, MethodInfo*))ObjectPool_1_get_countActive_m16412_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m20849(__this, method) (( int32_t (*) (ObjectPool_1_t481 *, MethodInfo*))ObjectPool_1_get_countInactive_m16414_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m2999(__this, method) (( List_1_t484 * (*) (ObjectPool_1_t481 *, MethodInfo*))ObjectPool_1_Get_m16416_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m3000(__this, ___element, method) (( void (*) (ObjectPool_1_t481 *, List_1_t484 *, MethodInfo*))ObjectPool_1_Release_m16418_gshared)(__this, ___element, method)

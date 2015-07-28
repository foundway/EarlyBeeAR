#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct ObjectPool_1_t369;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>
struct UnityAction_1_t375;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t377;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2647(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t369 *, UnityAction_1_t375 *, UnityAction_1_t375 *, MethodInfo*))ObjectPool_1__ctor_m16406_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countAll()
#define ObjectPool_1_get_countAll_m19223(__this, method) (( int32_t (*) (ObjectPool_1_t369 *, MethodInfo*))ObjectPool_1_get_countAll_m16408_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m19224(__this, ___value, method) (( void (*) (ObjectPool_1_t369 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16410_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countActive()
#define ObjectPool_1_get_countActive_m19225(__this, method) (( int32_t (*) (ObjectPool_1_t369 *, MethodInfo*))ObjectPool_1_get_countActive_m16412_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m19226(__this, method) (( int32_t (*) (ObjectPool_1_t369 *, MethodInfo*))ObjectPool_1_get_countInactive_m16414_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Get()
#define ObjectPool_1_Get_m2677(__this, method) (( List_1_t377 * (*) (ObjectPool_1_t369 *, MethodInfo*))ObjectPool_1_Get_m16416_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.UIVertex>>::Release(T)
#define ObjectPool_1_Release_m2678(__this, ___element, method) (( void (*) (ObjectPool_1_t369 *, List_1_t377 *, MethodInfo*))ObjectPool_1_Release_m16418_gshared)(__this, ___element, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t313;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t315;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t326;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m2500(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t313 *, UnityAction_1_t315 *, UnityAction_1_t315 *, MethodInfo*))ObjectPool_1__ctor_m16406_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m16407(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, MethodInfo*))ObjectPool_1_get_countAll_m16408_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m16409(__this, ___value, method) (( void (*) (ObjectPool_1_t313 *, int32_t, MethodInfo*))ObjectPool_1_set_countAll_m16410_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m16411(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, MethodInfo*))ObjectPool_1_get_countActive_m16412_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m16413(__this, method) (( int32_t (*) (ObjectPool_1_t313 *, MethodInfo*))ObjectPool_1_get_countInactive_m16414_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m16415(__this, method) (( List_1_t326 * (*) (ObjectPool_1_t313 *, MethodInfo*))ObjectPool_1_Get_m16416_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m16417(__this, ___element, method) (( void (*) (ObjectPool_1_t313 *, List_1_t326 *, MethodInfo*))ObjectPool_1_Release_m16418_gshared)(__this, ___element, method)

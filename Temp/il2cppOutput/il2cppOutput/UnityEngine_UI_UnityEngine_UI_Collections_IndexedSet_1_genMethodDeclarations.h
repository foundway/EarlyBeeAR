#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>
struct IndexedSet_1_t359;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t362;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.ICanvasElement>
struct IEnumerator_1_t4855;
// UnityEngine.UI.ICanvasElement[]
struct ICanvasElementU5BU5D_t3380;
// System.Predicate`1<UnityEngine.UI.ICanvasElement>
struct Predicate_1_t361;
// System.Comparison`1<UnityEngine.UI.ICanvasElement>
struct Comparison_1_t360;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m2608(__this, method) (( void (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1__ctor_m18325_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18326(__this, method) (( Object_t * (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18327_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Add(T)
#define IndexedSet_1_Add_m2619(__this, ___item, method) (( void (*) (IndexedSet_1_t359 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m18328_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Remove(T)
#define IndexedSet_1_Remove_m2621(__this, ___item, method) (( bool (*) (IndexedSet_1_t359 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m18329_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m18330(__this, method) (( Object_t* (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1_GetEnumerator_m18331_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Clear()
#define IndexedSet_1_Clear_m2618(__this, method) (( void (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1_Clear_m18332_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Contains(T)
#define IndexedSet_1_Contains_m18333(__this, ___item, method) (( bool (*) (IndexedSet_1_t359 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m18334_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m18335(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t359 *, ICanvasElementU5BU5D_t3380*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m18336_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Count()
#define IndexedSet_1_get_Count_m2617(__this, method) (( int32_t (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1_get_Count_m18337_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m18338(__this, method) (( bool (*) (IndexedSet_1_t359 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m18339_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::IndexOf(T)
#define IndexedSet_1_IndexOf_m18340(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t359 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m18341_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m18342(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t359 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m18343_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m18344(__this, ___index, method) (( void (*) (IndexedSet_1_t359 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m18345_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m2613(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t359 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m18346_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m18347(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t359 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m18348_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m2623(__this, ___match, method) (( void (*) (IndexedSet_1_t359 *, Predicate_1_t361 *, MethodInfo*))IndexedSet_1_RemoveAll_m18349_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m2624(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t359 *, Comparison_1_t360 *, MethodInfo*))IndexedSet_1_Sort_m18350_gshared)(__this, ___sortLayoutFunction, method)

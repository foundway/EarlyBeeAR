#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t3365;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t258;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Predicate`1<System.Object>
struct Predicate_1_t3089;
// System.Comparison`1<System.Object>
struct Comparison_1_t3104;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m18325_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1__ctor_m18325(__this, method) (( void (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1__ctor_m18325_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18327_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18327(__this, method) (( Object_t * (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m18327_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m18328_gshared (IndexedSet_1_t3365 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Add_m18328(__this, ___item, method) (( void (*) (IndexedSet_1_t3365 *, Object_t *, MethodInfo*))IndexedSet_1_Add_m18328_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m18329_gshared (IndexedSet_1_t3365 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Remove_m18329(__this, ___item, method) (( bool (*) (IndexedSet_1_t3365 *, Object_t *, MethodInfo*))IndexedSet_1_Remove_m18329_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m18331_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m18331(__this, method) (( Object_t* (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1_GetEnumerator_m18331_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m18332_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1_Clear_m18332(__this, method) (( void (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1_Clear_m18332_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m18334_gshared (IndexedSet_1_t3365 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Contains_m18334(__this, ___item, method) (( bool (*) (IndexedSet_1_t3365 *, Object_t *, MethodInfo*))IndexedSet_1_Contains_m18334_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m18336_gshared (IndexedSet_1_t3365 * __this, ObjectU5BU5D_t178* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define IndexedSet_1_CopyTo_m18336(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t3365 *, ObjectU5BU5D_t178*, int32_t, MethodInfo*))IndexedSet_1_CopyTo_m18336_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m18337_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1_get_Count_m18337(__this, method) (( int32_t (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1_get_Count_m18337_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m18339_gshared (IndexedSet_1_t3365 * __this, MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m18339(__this, method) (( bool (*) (IndexedSet_1_t3365 *, MethodInfo*))IndexedSet_1_get_IsReadOnly_m18339_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m18341_gshared (IndexedSet_1_t3365 * __this, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_IndexOf_m18341(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t3365 *, Object_t *, MethodInfo*))IndexedSet_1_IndexOf_m18341_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m18343_gshared (IndexedSet_1_t3365 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define IndexedSet_1_Insert_m18343(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t3365 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_Insert_m18343_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m18345_gshared (IndexedSet_1_t3365 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_RemoveAt_m18345(__this, ___index, method) (( void (*) (IndexedSet_1_t3365 *, int32_t, MethodInfo*))IndexedSet_1_RemoveAt_m18345_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m18346_gshared (IndexedSet_1_t3365 * __this, int32_t ___index, MethodInfo* method);
#define IndexedSet_1_get_Item_m18346(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t3365 *, int32_t, MethodInfo*))IndexedSet_1_get_Item_m18346_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m18348_gshared (IndexedSet_1_t3365 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define IndexedSet_1_set_Item_m18348(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t3365 *, int32_t, Object_t *, MethodInfo*))IndexedSet_1_set_Item_m18348_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m18349_gshared (IndexedSet_1_t3365 * __this, Predicate_1_t3089 * ___match, MethodInfo* method);
#define IndexedSet_1_RemoveAll_m18349(__this, ___match, method) (( void (*) (IndexedSet_1_t3365 *, Predicate_1_t3089 *, MethodInfo*))IndexedSet_1_RemoveAll_m18349_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m18350_gshared (IndexedSet_1_t3365 * __this, Comparison_1_t3104 * ___sortLayoutFunction, MethodInfo* method);
#define IndexedSet_1_Sort_m18350(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t3365 *, Comparison_1_t3104 *, MethodInfo*))IndexedSet_1_Sort_m18350_gshared)(__this, ___sortLayoutFunction, method)

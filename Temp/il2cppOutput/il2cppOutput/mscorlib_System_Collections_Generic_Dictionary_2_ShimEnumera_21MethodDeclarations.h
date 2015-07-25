#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct ShimEnumerator_t4048;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t919;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25769_gshared (ShimEnumerator_t4048 * __this, Dictionary_2_t919 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m25769(__this, ___host, method) (( void (*) (ShimEnumerator_t4048 *, Dictionary_2_t919 *, MethodInfo*))ShimEnumerator__ctor_m25769_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25770_gshared (ShimEnumerator_t4048 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m25770(__this, method) (( bool (*) (ShimEnumerator_t4048 *, MethodInfo*))ShimEnumerator_MoveNext_m25770_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Entry()
extern "C" DictionaryEntry_t1610  ShimEnumerator_get_Entry_m25771_gshared (ShimEnumerator_t4048 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m25771(__this, method) (( DictionaryEntry_t1610  (*) (ShimEnumerator_t4048 *, MethodInfo*))ShimEnumerator_get_Entry_m25771_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25772_gshared (ShimEnumerator_t4048 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m25772(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, MethodInfo*))ShimEnumerator_get_Key_m25772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25773_gshared (ShimEnumerator_t4048 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m25773(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, MethodInfo*))ShimEnumerator_get_Value_m25773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25774_gshared (ShimEnumerator_t4048 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m25774(__this, method) (( Object_t * (*) (ShimEnumerator_t4048 *, MethodInfo*))ShimEnumerator_get_Current_m25774_gshared)(__this, method)

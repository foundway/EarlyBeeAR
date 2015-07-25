﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t1715;
// System.Text.RegularExpressions.Match
struct Match_t1704;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1351;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
extern "C" void MatchCollection__ctor_m8386 (MatchCollection_t1715 * __this, Match_t1704 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C" int32_t MatchCollection_get_Count_m8387 (MatchCollection_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern "C" bool MatchCollection_get_IsSynchronized_m8388 (MatchCollection_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern "C" Match_t1704 * MatchCollection_get_Item_m8389 (MatchCollection_t1715 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern "C" Object_t * MatchCollection_get_SyncRoot_m8390 (MatchCollection_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern "C" void MatchCollection_CopyTo_m8391 (MatchCollection_t1715 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern "C" Object_t * MatchCollection_GetEnumerator_m8392 (MatchCollection_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
extern "C" bool MatchCollection_TryToGet_m8393 (MatchCollection_t1715 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
extern "C" Object_t * MatchCollection_get_FullList_m8394 (MatchCollection_t1715 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

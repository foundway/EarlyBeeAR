#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable
struct Hashtable_t1603;
// System.Collections.IComparer
struct IComparer_t1611;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1617;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1351;
// System.Collections.IDictionary
struct IDictionary_t1606;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1618;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1607;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2126;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C" void Hashtable__ctor_m9005 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m11603 (Hashtable_t1603 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C" void Hashtable__ctor_m11604 (Hashtable_t1603 * __this, int32_t ___capacity, float ___loadFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C" void Hashtable__ctor_m9013 (Hashtable_t1603 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C" void Hashtable__ctor_m11605 (Hashtable_t1603 * __this, Hashtable_t1603 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m8804 (Hashtable_t1603 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m11606 (Hashtable_t1603 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m8810 (Hashtable_t1603 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void Hashtable__ctor_m8860 (Hashtable_t1603 * __this, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable__ctor_m11607 (Hashtable_t1603 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m8823 (Hashtable_t1603 * __this, int32_t ___capacity, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C" void Hashtable__ctor_m11608 (Hashtable_t1603 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C" void Hashtable__cctor_m11609 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m11610 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C" void Hashtable_set_comparer_m11611 (Hashtable_t1603 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C" void Hashtable_set_hcp_m11612 (Hashtable_t1603 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C" int32_t Hashtable_get_Count_m9016 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C" bool Hashtable_get_IsSynchronized_m11613 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C" Object_t * Hashtable_get_SyncRoot_m11614 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C" Object_t * Hashtable_get_Keys_m9033 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C" Object_t * Hashtable_get_Values_m10118 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C" Object_t * Hashtable_get_Item_m8833 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C" void Hashtable_set_Item_m9014 (Hashtable_t1603 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C" void Hashtable_CopyTo_m11615 (Hashtable_t1603 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C" void Hashtable_Add_m8834 (Hashtable_t1603 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C" void Hashtable_Clear_m9032 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C" bool Hashtable_Contains_m9017 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C" Object_t * Hashtable_GetEnumerator_m11616 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C" void Hashtable_Remove_m9015 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C" bool Hashtable_ContainsKey_m8864 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C" Object_t * Hashtable_Clone_m11617 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Hashtable_GetObjectData_m11618 (Hashtable_t1603 * __this, SerializationInfo_t1208 * ___info, StreamingContext_t1209  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C" void Hashtable_OnDeserialization_m11619 (Hashtable_t1603 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C" int32_t Hashtable_GetHash_m11620 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C" bool Hashtable_KeyEquals_m11621 (Hashtable_t1603 * __this, Object_t * ___item, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C" void Hashtable_AdjustThreshold_m11622 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C" void Hashtable_SetTable_m11623 (Hashtable_t1603 * __this, SlotU5BU5D_t2126* ___table, Int32U5BU5D_t34* ___hashes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C" int32_t Hashtable_Find_m11624 (Hashtable_t1603 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C" void Hashtable_Rehash_m11625 (Hashtable_t1603 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C" void Hashtable_PutImpl_m11626 (Hashtable_t1603 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C" void Hashtable_CopyToArray_m11627 (Hashtable_t1603 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C" bool Hashtable_TestPrime_m11628 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C" int32_t Hashtable_CalcPrime_m11629 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C" int32_t Hashtable_ToPrime_m11630 (Object_t * __this /* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;

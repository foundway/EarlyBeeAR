﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t34;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2900;
// System.String[]
struct StringU5BU5D_t208;
// System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>[]
struct List_1U5BU5D_t3898;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3044;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1208;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>,System.Collections.DictionaryEntry>
struct Transform_1_t3899;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>
struct  Dictionary_2_t769  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::table
	Int32U5BU5D_t34* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::linkSlots
	LinkU5BU5D_t2900* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::keySlots
	StringU5BU5D_t208* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::valueSlots
	List_1U5BU5D_t3898* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::serialization_info
	SerializationInfo_t1208 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t769_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<Vuforia.WordAbstractBehaviour>>::<>f__am$cacheB
	Transform_1_t3899 * ___U3CU3Ef__am$cacheB_15;
};

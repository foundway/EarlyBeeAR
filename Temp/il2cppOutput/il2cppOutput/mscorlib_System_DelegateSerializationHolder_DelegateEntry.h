﻿#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t2486;
// System.Object
#include "mscorlib_System_Object.h"
// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t2486  : public Object_t
{
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	Object_t * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t2486 * ___delegateEntry_6;
};

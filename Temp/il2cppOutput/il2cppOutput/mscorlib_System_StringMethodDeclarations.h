﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t410;
// System.IFormatProvider
struct IFormatProvider_t1259;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t2010;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String[]
struct StringU5BU5D_t208;
// System.Globalization.CultureInfo
struct CultureInfo_t1255;
// System.Object[]
struct ObjectU5BU5D_t178;
// System.Text.StringBuilder
struct StringBuilder_t493;
// System.Text.Encoding
struct Encoding_t1058;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
extern "C" void String__ctor_m10463 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C" void String__ctor_m7354 (String_t* __this, CharU5BU5D_t410* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C" void String__ctor_m7359 (String_t* __this, CharU5BU5D_t410* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C" void String__ctor_m2793 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C" void String__cctor_m10464 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool String_System_IConvertible_ToBoolean_m10465 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t String_System_IConvertible_ToByte_m10466 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToChar_m10467 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t700  String_System_IConvertible_ToDateTime_m10468 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1261  String_System_IConvertible_ToDecimal_m10469 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double String_System_IConvertible_ToDouble_m10470 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t String_System_IConvertible_ToInt16_m10471 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t String_System_IConvertible_ToInt32_m10472 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t String_System_IConvertible_ToInt64_m10473 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t String_System_IConvertible_ToSByte_m10474 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float String_System_IConvertible_ToSingle_m10475 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * String_System_IConvertible_ToType_m10476 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t String_System_IConvertible_ToUInt16_m10477 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t String_System_IConvertible_ToUInt32_m10478 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t String_System_IConvertible_ToUInt64_m10479 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C" Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m10480 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * String_System_Collections_IEnumerable_GetEnumerator_m10481 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C" bool String_Equals_m10482 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C" bool String_Equals_m10483 (String_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C" bool String_Equals_m4949 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C" uint16_t String_get_Chars_m2767 (String_t* __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CopyTo_m10484 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t410* ___destination, int32_t ___destinationIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C" CharU5BU5D_t410* String_ToCharArray_m7351 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C" CharU5BU5D_t410* String_ToCharArray_m10485 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C" StringU5BU5D_t208* String_Split_m5645 (String_t* __this, CharU5BU5D_t410* ___separator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C" StringU5BU5D_t208* String_Split_m10486 (String_t* __this, CharU5BU5D_t410* ___separator, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t208* String_Split_m10487 (String_t* __this, CharU5BU5D_t410* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C" StringU5BU5D_t208* String_Split_m10488 (String_t* __this, StringU5BU5D_t208* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C" StringU5BU5D_t208* String_Split_m8904 (String_t* __this, StringU5BU5D_t208* ___separator, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C" String_t* String_Substring_m2792 (String_t* __this, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" String_t* String_Substring_m2768 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C" String_t* String_SubstringUnchecked_m10489 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C" String_t* String_Trim_m7268 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C" String_t* String_Trim_m7269 (String_t* __this, CharU5BU5D_t410* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C" String_t* String_TrimStart_m9080 (String_t* __this, CharU5BU5D_t410* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C" String_t* String_TrimEnd_m8902 (String_t* __this, CharU5BU5D_t410* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C" int32_t String_FindNotWhiteSpace_m10490 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C" int32_t String_FindNotInTable_m10491 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t410* ___table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C" int32_t String_Compare_m10492 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C" int32_t String_Compare_m10493 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m8866 (Object_t * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t1255 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C" int32_t String_Compare_m10177 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t1255 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C" int32_t String_CompareTo_m10494 (String_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C" int32_t String_CompareTo_m10495 (String_t* __this, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinal_m9075 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalUnchecked_m10496 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C" int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m10497 (Object_t * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C" bool String_EndsWith_m4950 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C" int32_t String_IndexOfAny_m9074 (String_t* __this, CharU5BU5D_t410* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_IndexOfAny_m2787 (String_t* __this, CharU5BU5D_t410* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAny_m10071 (String_t* __this, CharU5BU5D_t410* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_IndexOfAnyUnchecked_m10498 (String_t* __this, CharU5BU5D_t410* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C" int32_t String_IndexOf_m7266 (String_t* __this, String_t* ___value, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C" int32_t String_IndexOf_m10499 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C" int32_t String_IndexOfOrdinal_m10500 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalUnchecked_m10501 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m10502 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C" int32_t String_IndexOf_m2821 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C" int32_t String_IndexOf_m7267 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m9081 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_IndexOfUnchecked_m10503 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C" int32_t String_IndexOf_m7279 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C" int32_t String_IndexOf_m7444 (String_t* __this, String_t* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_IndexOf_m10504 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C" int32_t String_LastIndexOfAny_m10505 (String_t* __this, CharU5BU5D_t410* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
extern "C" int32_t String_LastIndexOfAny_m2788 (String_t* __this, CharU5BU5D_t410* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfAnyUnchecked_m10506 (String_t* __this, CharU5BU5D_t410* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C" int32_t String_LastIndexOf_m5443 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C" int32_t String_LastIndexOf_m9076 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m9082 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOfUnchecked_m10507 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C" int32_t String_LastIndexOf_m7447 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C" int32_t String_LastIndexOf_m10508 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C" bool String_Contains_m2815 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" bool String_IsNullOrEmpty_m2794 (Object_t * __this /* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32)
extern "C" String_t* String_Remove_m4849 (String_t* __this, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C" String_t* String_PadRight_m10509 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C" bool String_StartsWith_m7277 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C" String_t* String_Replace_m7446 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C" String_t* String_Replace_m7445 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C" String_t* String_ReplaceUnchecked_m10510 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C" String_t* String_ReplaceFallback_m10511 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C" String_t* String_Remove_m2789 (String_t* __this, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C" String_t* String_ToLower_m5557 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C" String_t* String_ToLower_m9078 (String_t* __this, CultureInfo_t1255 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C" String_t* String_ToLowerInvariant_m5220 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper()
extern "C" String_t* String_ToUpper_m7280 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
extern "C" String_t* String_ToUpper_m10512 (String_t* __this, CultureInfo_t1255 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToUpperInvariant()
extern "C" String_t* String_ToUpperInvariant_m10513 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C" String_t* String_ToString_m7273 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C" String_t* String_ToString_m10514 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C" String_t* String_Format_m2620 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" String_t* String_Format_m4992 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" String_t* String_Format_m10515 (Object_t * __this /* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C" String_t* String_Format_m2929 (Object_t * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t178* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C" String_t* String_Format_m10115 (Object_t * __this /* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t178* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C" StringBuilder_t493 * String_FormatHelper_m10516 (Object_t * __this /* static, unused */, StringBuilder_t493 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t178* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C" String_t* String_Concat_m582 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" String_t* String_Concat_m2459 (Object_t * __this /* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C" String_t* String_Concat_m731 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" String_t* String_Concat_m803 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" String_t* String_Concat_m4963 (Object_t * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C" String_t* String_Concat_m633 (Object_t * __this /* static, unused */, ObjectU5BU5D_t178* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C" String_t* String_Concat_m7291 (Object_t * __this /* static, unused */, StringU5BU5D_t208* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C" String_t* String_ConcatInternal_m10517 (Object_t * __this /* static, unused */, StringU5BU5D_t208* ___values, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C" String_t* String_Insert_m2791 (String_t* __this, int32_t ___startIndex, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C" String_t* String_Join_m802 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t208* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_Join_m10518 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t208* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C" String_t* String_JoinUnchecked_m10519 (Object_t * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t208* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C" int32_t String_get_Length_m2751 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C" void String_ParseFormatSpecifier_m10520 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C" int32_t String_ParseDecimal_m10521 (Object_t * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C" void String_InternalSetChar_m10522 (String_t* __this, int32_t ___idx, uint16_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C" void String_InternalSetLength_m10523 (String_t* __this, int32_t ___newLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C" int32_t String_GetHashCode_m7229 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C" int32_t String_GetCaseInsensitiveHashCode_m10524 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C" String_t* String_CreateString_m10525 (String_t* __this, int8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m10526 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C" String_t* String_CreateString_m10527 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t1058 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C" String_t* String_CreateString_m10528 (String_t* __this, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m10529 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C" String_t* String_CreateString_m7376 (String_t* __this, CharU5BU5D_t410* ___val, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C" String_t* String_CreateString_m7377 (String_t* __this, CharU5BU5D_t410* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" String_t* String_CreateString_m2843 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy4_m10530 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy2_m10531 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy1_m10532 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C" void String_memcpy_m10533 (Object_t * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopy_m10534 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C" void String_CharCopyReverse_m10535 (Object_t * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopy_m10536 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C" void String_CharCopy_m10537 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t410* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C" void String_CharCopyReverse_m10538 (Object_t * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C" StringU5BU5D_t208* String_InternalSplit_m10539 (String_t* __this, CharU5BU5D_t410* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C" String_t* String_InternalAllocateStr_m10540 (Object_t * __this /* static, unused */, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" bool String_op_Equality_m653 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" bool String_op_Inequality_m2766 (Object_t * __this /* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
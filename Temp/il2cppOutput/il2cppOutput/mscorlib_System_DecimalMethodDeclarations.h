#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t1261;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1259;
// System.Int32[]
struct Int32U5BU5D_t34;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t2008;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C" void Decimal__ctor_m10597 (Decimal_t1261 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C" void Decimal__ctor_m10598 (Decimal_t1261 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C" void Decimal__ctor_m10599 (Decimal_t1261 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C" void Decimal__ctor_m10600 (Decimal_t1261 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C" void Decimal__ctor_m10601 (Decimal_t1261 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C" void Decimal__ctor_m10602 (Decimal_t1261 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C" void Decimal__ctor_m10603 (Decimal_t1261 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C" void Decimal__cctor_m10604 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Decimal_System_IConvertible_ToType_m10605 (Decimal_t1261 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Decimal_System_IConvertible_ToBoolean_m10606 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Decimal_System_IConvertible_ToByte_m10607 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToChar_m10608 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t700  Decimal_System_IConvertible_ToDateTime_m10609 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t1261  Decimal_System_IConvertible_ToDecimal_m10610 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Decimal_System_IConvertible_ToDouble_m10611 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Decimal_System_IConvertible_ToInt16_m10612 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Decimal_System_IConvertible_ToInt32_m10613 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Decimal_System_IConvertible_ToInt64_m10614 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Decimal_System_IConvertible_ToSByte_m10615 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Decimal_System_IConvertible_ToSingle_m10616 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Decimal_System_IConvertible_ToUInt16_m10617 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Decimal_System_IConvertible_ToUInt32_m10618 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Decimal_System_IConvertible_ToUInt64_m10619 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C" Int32U5BU5D_t34* Decimal_GetBits_m10620 (Object_t * __this /* static, unused */, Decimal_t1261  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_Add_m10621 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_Subtract_m10622 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C" int32_t Decimal_GetHashCode_m10623 (Decimal_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C" uint64_t Decimal_u64_m10624 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C" int64_t Decimal_s64_m10625 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C" bool Decimal_Equals_m10626 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C" bool Decimal_Equals_m10627 (Decimal_t1261 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C" bool Decimal_IsZero_m10628 (Decimal_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C" Decimal_t1261  Decimal_Floor_m10629 (Object_t * __this /* static, unused */, Decimal_t1261  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_Multiply_m10630 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_Divide_m10631 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C" int32_t Decimal_Compare_m10632 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C" int32_t Decimal_CompareTo_m10633 (Decimal_t1261 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C" int32_t Decimal_CompareTo_m10634 (Decimal_t1261 * __this, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C" bool Decimal_Equals_m10635 (Decimal_t1261 * __this, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C" Decimal_t1261  Decimal_Parse_m10636 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C" void Decimal_ThrowAtPos_m10637 (Object_t * __this /* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C" void Decimal_ThrowInvalidExp_m10638 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C" String_t* Decimal_stripStyles_m10639 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t2008 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" Decimal_t1261  Decimal_Parse_m10640 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C" bool Decimal_PerformParse_m10641 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t1261 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m10642 (Decimal_t1261 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C" String_t* Decimal_ToString_m10643 (Decimal_t1261 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C" String_t* Decimal_ToString_m7372 (Decimal_t1261 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C" int32_t Decimal_decimal2UInt64_m10644 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C" int32_t Decimal_decimal2Int64_m10645 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalIncr_m10646 (Object_t * __this /* static, unused */, Decimal_t1261 * ___d1, Decimal_t1261 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C" int32_t Decimal_string2decimal_m10647 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C" int32_t Decimal_decimalSetExponent_m10648 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C" double Decimal_decimal2double_m10649 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C" void Decimal_decimalFloorAndTrunc_m10650 (Object_t * __this /* static, unused */, Decimal_t1261 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalMult_m10651 (Object_t * __this /* static, unused */, Decimal_t1261 * ___pd1, Decimal_t1261 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalDiv_m10652 (Object_t * __this /* static, unused */, Decimal_t1261 * ___pc, Decimal_t1261 * ___pa, Decimal_t1261 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C" int32_t Decimal_decimalCompare_m10653 (Object_t * __this /* static, unused */, Decimal_t1261 * ___d1, Decimal_t1261 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C" Decimal_t1261  Decimal_op_Increment_m10654 (Object_t * __this /* static, unused */, Decimal_t1261  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_op_Subtraction_m10655 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_op_Multiply_m10656 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C" Decimal_t1261  Decimal_op_Division_m10657 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C" uint8_t Decimal_op_Explicit_m10658 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C" int8_t Decimal_op_Explicit_m10659 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C" int16_t Decimal_op_Explicit_m10660 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint16_t Decimal_op_Explicit_m10661 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C" int32_t Decimal_op_Explicit_m10662 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint32_t Decimal_op_Explicit_m10663 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C" int64_t Decimal_op_Explicit_m10664 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C" uint64_t Decimal_op_Explicit_m10665 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10666 (Object_t * __this /* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10667 (Object_t * __this /* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10668 (Object_t * __this /* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10669 (Object_t * __this /* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10670 (Object_t * __this /* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10671 (Object_t * __this /* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10672 (Object_t * __this /* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C" Decimal_t1261  Decimal_op_Implicit_m10673 (Object_t * __this /* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C" Decimal_t1261  Decimal_op_Explicit_m10674 (Object_t * __this /* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C" Decimal_t1261  Decimal_op_Explicit_m10675 (Object_t * __this /* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C" float Decimal_op_Explicit_m10676 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C" double Decimal_op_Explicit_m10677 (Object_t * __this /* static, unused */, Decimal_t1261  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Inequality_m10678 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_Equality_m10679 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_GreaterThan_m10680 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C" bool Decimal_op_LessThan_m10681 (Object_t * __this /* static, unused */, Decimal_t1261  ___d1, Decimal_t1261  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;

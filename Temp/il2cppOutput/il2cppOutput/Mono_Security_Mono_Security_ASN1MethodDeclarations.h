﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1
struct ASN1_t1671;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.String
struct String_t;

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C" void ASN1__ctor_m8906 (ASN1_t1671 * __this, uint8_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C" void ASN1__ctor_m8907 (ASN1_t1671 * __this, uint8_t ___tag, ByteU5BU5D_t679* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C" void ASN1__ctor_m8890 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C" int32_t ASN1_get_Count_m8894 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C" uint8_t ASN1_get_Tag_m8891 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C" int32_t ASN1_get_Length_m8924 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C" ByteU5BU5D_t679* ASN1_get_Value_m8893 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C" void ASN1_set_Value_m9294 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C" bool ASN1_CompareArray_m9295 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___array1, ByteU5BU5D_t679* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C" bool ASN1_CompareValue_m8923 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C" ASN1_t1671 * ASN1_Add_m8908 (ASN1_t1671 * __this, ASN1_t1671 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C" ByteU5BU5D_t679* ASN1_GetBytes_m8910 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C" void ASN1_Decode_m9296 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___asn1, int32_t* ___anPos, int32_t ___anLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C" void ASN1_DecodeTLV_m9297 (ASN1_t1671 * __this, ByteU5BU5D_t679* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t679** ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C" ASN1_t1671 * ASN1_get_Item_m8895 (ASN1_t1671 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C" ASN1_t1671 * ASN1_Element_m9298 (ASN1_t1671 * __this, int32_t ___index, uint8_t ___anTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C" String_t* ASN1_ToString_m9299 (ASN1_t1671 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
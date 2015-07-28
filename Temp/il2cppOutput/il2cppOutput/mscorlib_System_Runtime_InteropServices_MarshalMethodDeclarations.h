#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.Marshal
struct Marshal_t845;
// System.Array
struct Array_t;
// System.Byte[]
struct ByteU5BU5D_t679;
// System.Char[]
struct CharU5BU5D_t410;
// System.Single[]
struct SingleU5BU5D_t25;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.Marshal::.cctor()
extern "C" void Marshal__cctor_m12660 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.IntPtr)
extern "C" IntPtr_t Marshal_AllocHGlobal_m12661 (Object_t * __this /* static, unused */, IntPtr_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
extern "C" IntPtr_t Marshal_AllocHGlobal_m4805 (Object_t * __this /* static, unused */, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_to_unmanaged(System.Array,System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_copy_to_unmanaged_m12662 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::copy_from_unmanaged(System.IntPtr,System.Int32,System.Array,System.Int32)
extern "C" void Marshal_copy_from_unmanaged_m12663 (Object_t * __this /* static, unused */, IntPtr_t ___source, int32_t ___startIndex, Array_t * ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
extern "C" void Marshal_Copy_m5018 (Object_t * __this /* static, unused */, ByteU5BU5D_t679* ___source, int32_t ___startIndex, IntPtr_t ___destination, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m5015 (Object_t * __this /* static, unused */, IntPtr_t ___source, ByteU5BU5D_t679* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Char[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m12664 (Object_t * __this /* static, unused */, IntPtr_t ___source, CharU5BU5D_t410* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
extern "C" void Marshal_Copy_m4807 (Object_t * __this /* static, unused */, IntPtr_t ___source, SingleU5BU5D_t25* ___destination, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
extern "C" void Marshal_FreeHGlobal_m4809 (Object_t * __this /* static, unused */, IntPtr_t ___hglobal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAnsi(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringAnsi_m5512 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringUni(System.IntPtr)
extern "C" String_t* Marshal_PtrToStringUni_m4813 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.Marshal::PtrToStructure(System.IntPtr,System.Type)
extern "C" Object_t * Marshal_PtrToStructure_m4906 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, Type_t * ___structureType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr)
extern "C" int32_t Marshal_ReadInt32_m5518 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::ReadInt32(System.IntPtr,System.Int32)
extern "C" int32_t Marshal_ReadInt32_m12665 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, int32_t ___ofs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf(System.Type)
extern "C" int32_t Marshal_SizeOf_m4804 (Object_t * __this /* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.Marshal::StringToHGlobalUni(System.String)
extern "C" IntPtr_t Marshal_StringToHGlobalUni_m4814 (Object_t * __this /* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr(System.Object,System.IntPtr,System.Boolean)
extern "C" void Marshal_StructureToPtr_m4837 (Object_t * __this /* static, unused */, Object_t * ___structure, IntPtr_t ___ptr, bool ___fDeleteOld, MethodInfo* method) IL2CPP_METHOD_ATTR;

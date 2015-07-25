﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Directory
struct Directory_t2155;
// System.IO.DirectoryInfo
struct DirectoryInfo_t2156;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t208;
// System.IO.FileAttributes
#include "mscorlib_System_IO_FileAttributes.h"

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" DirectoryInfo_t2156 * Directory_CreateDirectory_m10090 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
extern "C" DirectoryInfo_t2156 * Directory_CreateDirectoriesInternal_m11891 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
extern "C" bool Directory_Exists_m10089 (Object_t * __this /* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
extern "C" String_t* Directory_GetCurrentDirectory_m11892 (Object_t * __this /* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFiles(System.String,System.String)
extern "C" StringU5BU5D_t208* Directory_GetFiles_m10091 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.IO.Directory::GetFileSystemEntries(System.String,System.String,System.IO.FileAttributes,System.IO.FileAttributes)
extern "C" StringU5BU5D_t208* Directory_GetFileSystemEntries_m11893 (Object_t * __this /* static, unused */, String_t* ___path, String_t* ___searchPattern, int32_t ___mask, int32_t ___attrs, MethodInfo* method) IL2CPP_METHOD_ATTR;

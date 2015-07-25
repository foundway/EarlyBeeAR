#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t2169;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1941;
// System.AsyncCallback
struct AsyncCallback_t42;
// System.IAsyncResult
struct IAsyncResult_t41;

// System.Void System.IO.FileStreamAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FileStreamAsyncResult__ctor_m11959 (FileStreamAsyncResult_t2169 * __this, AsyncCallback_t42 * ___cb, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileStreamAsyncResult::CBWrapper(System.IAsyncResult)
extern "C" void FileStreamAsyncResult_CBWrapper_m11960 (Object_t * __this /* static, unused */, Object_t * ___ares, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.IO.FileStreamAsyncResult::get_AsyncState()
extern "C" Object_t * FileStreamAsyncResult_get_AsyncState_m11961 (FileStreamAsyncResult_t2169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.IO.FileStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1941 * FileStreamAsyncResult_get_AsyncWaitHandle_m11962 (FileStreamAsyncResult_t2169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileStreamAsyncResult::get_IsCompleted()
extern "C" bool FileStreamAsyncResult_get_IsCompleted_m11963 (FileStreamAsyncResult_t2169 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;

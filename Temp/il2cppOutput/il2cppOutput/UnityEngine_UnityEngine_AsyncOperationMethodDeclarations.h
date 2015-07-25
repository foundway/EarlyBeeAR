#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t974;
struct AsyncOperation_t974_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m6495 (AsyncOperation_t974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m6496 (AsyncOperation_t974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m6497 (AsyncOperation_t974 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t974_marshal(const AsyncOperation_t974& unmarshaled, AsyncOperation_t974_marshaled& marshaled);
void AsyncOperation_t974_marshal_back(const AsyncOperation_t974_marshaled& marshaled, AsyncOperation_t974& unmarshaled);
void AsyncOperation_t974_marshal_cleanup(AsyncOperation_t974_marshaled& marshaled);

﻿#pragma once
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, MethodInfo*);

	static inline R Invoke (MethodInfo* method, void* obj)
	{
		VirtualInvokeData data = il2cpp::vm::Runtime::GetGenericInterfaceInvokeData (method, obj);
		return ((Func)data.methodInfo->method)(data.target, data.methodInfo);
	}
};

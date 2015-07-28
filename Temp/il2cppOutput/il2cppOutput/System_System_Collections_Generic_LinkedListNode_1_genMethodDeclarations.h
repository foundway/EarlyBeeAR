#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t873;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t727;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m22816_gshared (LinkedListNode_1_t873 * __this, LinkedList_1_t727 * ___list, int32_t ___value, MethodInfo* method);
#define LinkedListNode_1__ctor_m22816(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t873 *, LinkedList_1_t727 *, int32_t, MethodInfo*))LinkedListNode_1__ctor_m22816_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m22817_gshared (LinkedListNode_1_t873 * __this, LinkedList_1_t727 * ___list, int32_t ___value, LinkedListNode_1_t873 * ___previousNode, LinkedListNode_1_t873 * ___nextNode, MethodInfo* method);
#define LinkedListNode_1__ctor_m22817(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t873 *, LinkedList_1_t727 *, int32_t, LinkedListNode_1_t873 *, LinkedListNode_1_t873 *, MethodInfo*))LinkedListNode_1__ctor_m22817_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m22818_gshared (LinkedListNode_1_t873 * __this, MethodInfo* method);
#define LinkedListNode_1_Detach_m22818(__this, method) (( void (*) (LinkedListNode_1_t873 *, MethodInfo*))LinkedListNode_1_Detach_m22818_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t727 * LinkedListNode_1_get_List_m22819_gshared (LinkedListNode_1_t873 * __this, MethodInfo* method);
#define LinkedListNode_1_get_List_m22819(__this, method) (( LinkedList_1_t727 * (*) (LinkedListNode_1_t873 *, MethodInfo*))LinkedListNode_1_get_List_m22819_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t873 * LinkedListNode_1_get_Next_m5493_gshared (LinkedListNode_1_t873 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Next_m5493(__this, method) (( LinkedListNode_1_t873 * (*) (LinkedListNode_1_t873 *, MethodInfo*))LinkedListNode_1_get_Next_m5493_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m5149_gshared (LinkedListNode_1_t873 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Value_m5149(__this, method) (( int32_t (*) (LinkedListNode_1_t873 *, MethodInfo*))LinkedListNode_1_get_Value_m5149_gshared)(__this, method)

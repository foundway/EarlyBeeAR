#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Object>
struct LinkedListNode_1_t4666;
// System.Collections.Generic.LinkedList`1<System.Object>
struct LinkedList_1_t4667;
// System.Object
struct Object_t;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m31931_gshared (LinkedListNode_1_t4666 * __this, LinkedList_1_t4667 * ___list, Object_t * ___value, MethodInfo* method);
#define LinkedListNode_1__ctor_m31931(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t4666 *, LinkedList_1_t4667 *, Object_t *, MethodInfo*))LinkedListNode_1__ctor_m31931_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m31932_gshared (LinkedListNode_1_t4666 * __this, LinkedList_1_t4667 * ___list, Object_t * ___value, LinkedListNode_1_t4666 * ___previousNode, LinkedListNode_1_t4666 * ___nextNode, MethodInfo* method);
#define LinkedListNode_1__ctor_m31932(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t4666 *, LinkedList_1_t4667 *, Object_t *, LinkedListNode_1_t4666 *, LinkedListNode_1_t4666 *, MethodInfo*))LinkedListNode_1__ctor_m31932_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Object>::Detach()
extern "C" void LinkedListNode_1_Detach_m31933_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method);
#define LinkedListNode_1_Detach_m31933(__this, method) (( void (*) (LinkedListNode_1_t4666 *, MethodInfo*))LinkedListNode_1_Detach_m31933_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_List()
extern "C" LinkedList_1_t4667 * LinkedListNode_1_get_List_m31934_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method);
#define LinkedListNode_1_get_List_m31934(__this, method) (( LinkedList_1_t4667 * (*) (LinkedListNode_1_t4666 *, MethodInfo*))LinkedListNode_1_get_List_m31934_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Object>::get_Next()
extern "C" LinkedListNode_1_t4666 * LinkedListNode_1_get_Next_m31935_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Next_m31935(__this, method) (( LinkedListNode_1_t4666 * (*) (LinkedListNode_1_t4666 *, MethodInfo*))LinkedListNode_1_get_Next_m31935_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Object>::get_Value()
extern "C" Object_t * LinkedListNode_1_get_Value_m31936_gshared (LinkedListNode_1_t4666 * __this, MethodInfo* method);
#define LinkedListNode_1_get_Value_m31936(__this, method) (( Object_t * (*) (LinkedListNode_1_t4666 *, MethodInfo*))LinkedListNode_1_get_Value_m31936_gshared)(__this, method)

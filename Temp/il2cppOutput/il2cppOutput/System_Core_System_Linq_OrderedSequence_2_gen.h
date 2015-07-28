#pragma once
#include <stdint.h>
// System.Linq.OrderedEnumerable`1<System.Int32>
struct OrderedEnumerable_1_t3128;
// System.Func`2<System.Int32,System.Single>
struct Func_2_t32;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t3129;
// System.Linq.OrderedEnumerable`1<System.Int32>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<System.Int32,System.Single>
struct  OrderedSequence_2_t3130  : public OrderedEnumerable_1_t3128
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Int32,System.Single>::parent
	OrderedEnumerable_1_t3128 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Int32,System.Single>::selector
	Func_2_t32 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Int32,System.Single>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Int32,System.Single>::direction
	int32_t ___direction_4;
};

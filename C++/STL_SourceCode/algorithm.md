

# <algorithm>
	Standard Template Libray : Algorithms
	The header <algorithm> defines a collection of functions especially designed to be used on ranges of elements.

Functions in <algorithm>
Non-modifying sequence operations:
	1.all of
	2.any_of
	3.none_of
	4.for_each
	5.find
	6.find_if
	7.find_if_not
	8.find_end
	9.find_first_of
	10.adjacent_find
	11.count
	12.count_if
	13.mismatch
	14.equal
	15.is_permutation
	16.search
	17.search_n




## std::all_of
	1.函数原型：
		template<class InputIterator, class UnaryFredicate>
		bool all_of(InputIterator first, InputIterator last, UnaryFredicate pred);
	
		template<class InputIterator, class UnaryFredicate>
		bool all_of(InputIterator first, InputIterator last, UnaryFredicate pred)
		{
			while(first != last)
			{
				if(!pred(*first))
					return false;
				++first;
			}
			return true;
		}
	2.函数功能：
		Test condition on all elements in range.
	3.函数参数：
		first, last-Input iterators to the initial and final positions in a sequence. The range used is [first,last), which contains all the elements between first and last, including the element pointed by first but not the element pointed by last.
	pred-Unary function that accepts an element in the range as argument and returns a value convertible to bool. The value returned indicates whether the element fulfills the condition checked by this function.The function shall not modify its argument.This can either be a function pointer or a function object.
	4.函数返回值：
		true if pred returns true for all the elements in the range or if the range is empty, and false otherwise.

## std::find_first_of
	(1)template<class ForwardIterator1, class ForwardIterator2>
		ForwardIterator1 find_first_of(ForwardIterator1 first1, ForwardIterator1 last1, ForwardIterator2 first2, ForwardIterator2 last2);
	(2)template<class ForwardIterator1, class ForwardIterator2, class BinaryPredicate>
		ForwardIterator1 find_first_of(ForwardIterator1 first1, ForwardIterator1 last1,ForwardIterator2 first2, ForwardIterator2 last2, BinaryPredicate pred);
	

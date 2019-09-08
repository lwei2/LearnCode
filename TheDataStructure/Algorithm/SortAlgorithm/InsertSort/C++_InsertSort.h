/*************************************************************************
    > File Name: C++_InsertSort.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#ifndef _INSERT_SORT_H_
#define _INSERT_SORT_H_


#include <iostream>
#include <iterator>

using namespace std;

template <typename biIter>
void InsertSort(biIter begin, biIter end)
{
	typedef typename std::iterator_traits<biIter>::value_type value_type;
	biIter bond = begin;
	std::advance(bond, 1);
	for(; bond!=end;std::advance(bond,1))
	{
		value_type key = *bond;
		biIter ins = bond;
		biIter pre = ins;
		std::advance(pre, -1);
		while(ins != begin && *pre > key)
		{
			*ins = *pre;
			std::advance(ins,-1);
			std::advance(pre,-1);
		}
		*ins = key;
	}
}
#endif





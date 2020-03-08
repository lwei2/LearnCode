

#ifndef _MAX_
#define _MAX_

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

template <typename T>
inline T const &max(T const &a, T const &b)
{
	return a < b ? b : a;
}



#endif//

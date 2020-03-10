/*************************************************************************
    > File Name: max3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstring>
#include <string>

using namespace std;

template <typename T>
inline T const &max(T const &a, T const &b)
{
	return a < b ? b : a;
}

template <typename T>
inline T * const & max(T * const &a, T *const &b)
{
	return *a < *b ? b : a;
}

inline char const *const &max(char const *const &a, char const *const &b)
{
	return std::strcmp(a,b) < 0 ? b:a;
}

int main(void)
{
	int a = 7;
	int b = 42;
	::max(a,b);
	std::string s = "hey";
	std::string t = "you";
	::max(s,t);
	int *p1 = &b;
	int *p2 = &a;
	::max(p1,p2);
	char const *s1 =<F12> "David";
	char const *s2 = "Nico";
	::max(s1,s2);
	return 0;
}

/*************************************************************************
    > File Name: Pro17.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写一个方法，找出两个数字中最大的那个。条件是不得使用if-else等比较和判断运算符。

给定两个int a和b，请返回较大的一个数。若两数相同则返回任意一个。

测试样例：
1，2
返回：2
 ************************************************************************/


#include <iostream>

using namespace std;


class Max
{
	public:
		int getMax1(int a, int b)
		{
#if 0
			int result = a > b ? a : b;
			return result;
#else
			return (a > b ? a : b);
#endif

		}

	public:
		int getMax2(int a, int b)
		{
			return ((a+b) + abs(a-b))/2;
		}
	

	public:
		int getMax3(int a, int b)
		{
			int t = (a-b)>>31;
			return a + t*(a-b);
		}

};

int main(void)
{
	return 0;
}

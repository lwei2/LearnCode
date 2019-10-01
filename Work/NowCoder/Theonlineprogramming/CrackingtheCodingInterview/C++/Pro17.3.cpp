/*************************************************************************
    > File Name: Pro17.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请设计一个算法，计算n的阶乘有多少个尾随零。
给定一个int n，请返回n的阶乘的尾零个数。保证n为正整数。
测试样例：
5
返回：1
 ************************************************************************/


#include <iostream>

using namespace std;

class Factor
{
	public:
		int getFactorSuffixZero(int n)
		{
			int base = 5;
			int count = 0;
			while(n >= base)
			{
				count = count + n/base;
				base = base*5;
			}
			return count;
		}
};

int main(void)
{
	return 0;
}

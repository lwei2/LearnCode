/*************************************************************************
    > File Name: Pro7.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写一个方法，实现整数的乘法、减法和除法运算(这里的除指整除)。只允许使用加号。
给定两个正整数int a,int b,同时给定一个int type代表运算的类型，1为求a ＊ b，0为求a ／ b，-1为求a － b。请返回计算的结果，保证数据合法且结果一定在int范围内。
测试样例：
1,2,1
返回：2
 ************************************************************************/


#include <iostream>

using namespace std;

class AddSubstitution
{
	public:
		int cal(int a, int b, int type)
		{
			int res = 0;
			if(type == 1)
			{
				for(int i = 0; i < b; i++)
					res = res + a;
			}
			else if(type == -1)
				res = a + (~b) + 1;
			else
			{
				int tmp = a;
				while(tmp > 0 && tmp >= b)
				{
					tmp = tmp + (~b) + 1;
					res++;
				}
			}
			return res;
		}
};


int main(void)
{
	return 0;
}

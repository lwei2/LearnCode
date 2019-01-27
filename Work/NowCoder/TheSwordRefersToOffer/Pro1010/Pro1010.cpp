/*************************************************************************
    > File Name: Pro1010.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int NumberOf11(int n)
		{
			int count = 0;
			unsigned int flag = 1;
			while(flag)
			{
				if(n & flag)
					count++;
				flag = flag<<1;
			}
			return count;
		}

		int NumberOf12(int n)
		{
			int count = 0;
			while(n!=0)
			{
				count++;
				n = (n-1) & n;
			}
			return count;
		}
};


int main(void)
{
	return 0;
}

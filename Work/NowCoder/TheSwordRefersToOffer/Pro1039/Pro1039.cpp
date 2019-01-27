/*************************************************************************
    > File Name: Pro1039.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	一个整型数组里除了两个数字之外，其他的数字都出现了偶数次。请写程序找出这两个只出现一次的数字。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		void FindNumsAppearOnce(vector<int> data, int *num1, int *num2)
		{
			if(data.size() <= 2)
				return;
			int one = 0;
			for(int i = 0; i < data.size(); i++)
				one = one^data[i];
			int pos = 0;
			int flag = 1;
			while(flag)
			{
				if(one&flag)
					break;
				flag = flag<<1;
				pos++;
			}
			for(int i = 0; i < data.size(); i++)
				if(data[i] &flag)
					*num1 = *num1^data[i];
				else
					*num2 = *num2^data[i];
		}
};
int main(void)
{
	return 0;
}

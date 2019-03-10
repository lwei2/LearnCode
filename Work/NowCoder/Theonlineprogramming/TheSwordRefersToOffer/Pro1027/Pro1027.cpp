/*************************************************************************
    > File Name: Pro1027.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :数组中有一个数字出现的次数超过数组长度的一半，请找出这个数字。例如输入一个长度为9的数组{1,2,3,2,2,2,5,4,2}。由于数字2在数组中出现了5次，超过数组长度的一半，因此输出2。如果不存在则输出0。
 ************************************************************************/

#include<iostream>

using namespace std;


class Solution
{
	public:
		int MoreThanHalfNum_Solution(vector<string> numbers)
		{
			int length = numbers.size();
			if(0 == length)
				return 0;
			srot(numbers.begin(), numbers.end());
			int max_num = 0, num = 0;
			int val = numbers[0];
			for(int i = 0; i < length; i++)
			{
				if(val == numbers[i])	
					num++;
				else
				{
					max_num = num > max_num ? num : max_num;
					if(max_num > length/2)
						return val;
					val = numbers[i];
					num = 1;
				}
			}
			max_num = num > max_num ? num : max_num;
			if(max_num > length/2)
				return val;
			else
				return 0;
		}
};

int main(void)
{
	return 0;
}

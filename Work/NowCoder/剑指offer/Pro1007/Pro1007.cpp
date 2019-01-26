/*************************************************************************
    > File Name: Pro1007.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int jumpFloor1(int number)
		{
			int f = 1, g = 2;
			number--;
			while(number--)
			{
				g += f;
				f = g - f;
			}
			return f;
		}
		int jumpFloor2(int number)
		{
			if(number <= 0)
				return -1;
			else if(number == 1)
				return 1;
			else if(number == 2)
				return 2;
			else
				return jumpFloor2(number-1) + jumpFloor2(number-2);

		}
		int jumpFloor3(int number)
		{
			int result = 0;
			if(number == 0 || number == 1 || number == 2)
				result = number;
			int first = 1, second = 2;
			for(int i = 3; i <= number; i++)
			{
				result = first + second;
				first = second;
				second = result;
			}
			return result;
		}
		int jumpFloor4(int number)
		{
			if(number <= 0)
				return 0;
			if(number == 1)
				return 1;
			if(number == 2)
				return 2;
			int first = 1, second = 2, third = 0;
			for(int i = 3; i <= number; i++)
			{
				third = first + second;
				first = second;
				second = third;
			}
			return third;
		}
};
int main(void)
{
	return 0;
}

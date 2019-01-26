/*************************************************************************
    > File Name: Pro1008.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。求该青蛙跳上一个n级的台阶总共有多少种跳法。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int jumpFloorII1(int number)
		{
			if(number == 0)
				return number;
			int total = 1;
			for(int i = 1; i < number; i++)
				total *= 2;
			return total;
		}
		int jumpFloorII2(int number)
		{
			if(number <= 0)
				return -1;
			else if(number == 1)
				return 1;
			else
				return 2*jumpFloorII2(number - 1);
		}
};

int main(void)
{
	return 0;
}

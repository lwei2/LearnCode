/*************************************************************************
    > File Name: Pro1011.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		double Power(double base, int exponent)
		{
			double sum = 1.0;
			double result = 1.0;
			if(exponent == 0)
				return 1;
			if(exponent < 0)
			{
				for(int i = 1; i <= -exponent; i++)
				{
					sum *= base;
					result = 1.0/sum;
				}
			}
			else
			{
				for(int i = 1; i <= exponent; i++)
				{
					result *= base;
				}
			}
			return result;
		}
}

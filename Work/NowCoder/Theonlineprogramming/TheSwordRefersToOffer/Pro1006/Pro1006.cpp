/*************************************************************************
    > File Name: Pro1006.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :现在要求输入一个整数n，请你输出斐波那契数列的第n项（从0开始，第0项为0）
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public:
		int Fibonacci(int n)
		{
			int first = 0;
			int second = 1;
			int result = n;
			for(int i = 2; i <= n; i++)
			{
				result = first + second;
				first = second;
				second = result;
			}
			return result;
		}

		int Fibonacci1(int n)
		{
			int f = 0, g = 1;
			while(n--)
			{
				g += f;
				f = g - f;
			}
			return f;
		}

		int Fibonacci2(int n)
		{
			int preNum = 1;
			int prePreNum = 0;
			int result = 0;
			if(n == 0)
				return 0;
			if(n == 1)
				return 1;
			for(int i = 2; i <= n; i++)
			{
				result = preNum + prePreNum;
				prePreNum = preNum;
				preNum = result;
			}
			return result;
		}
};


int main(void)
{
	return 0;
}

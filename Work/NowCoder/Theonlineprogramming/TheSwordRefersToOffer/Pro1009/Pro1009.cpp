/*************************************************************************
    > File Name: Pro1009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Solution
{
	public;
		int rectCover(int number)
		{
			if(number <= 0)
				return number;
			int f1 = 1;
			int f2 = 2;
			int f3;
			for(int i = 3; i <= number; i++)
			{
				f3 = f1 + f2;
				f1 = f2;
				f2 = f3;
			}
			return f3;
		}

		int rectCover1(int number)
		{
			if(number == 0)
				return 0;
			if(number == 1)
				return 1;
			else if(number*2 == 2)
				return 1;
			else if(number*2 == 4)
				return 2;
			else
				return rectCover(number - 1)+ rectCover(number - 2);
		}

		int rectCover2(int number)
		{
			int result = 0;
			if(number == 0 || number == 1)
				result = number;
			else if(number*2 == 2)
				result = 1;
			else if(number*2 == 4)
				result = 2;
			else
				result = rectCover2(number - 1) + rectCover2(number-2);
			return result;
		}
};
int main(void)
{
	return 0;
}

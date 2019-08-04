/*************************************************************************
    > File Name: PowerofTwo.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		bool isPowerOfTwo1(int n)
		{
			if(n == 0)
				return false;
			if(n == 1)
				return true;
			int i = 0;
			for(i = n; i%2 ==0; i = i/2)
				;
			if(i == 1)
				return true;
			else
				return false;
		}
		int isPowerOfTwo2(int n)
		{
			if(n <= 0)
				return false;
			int and1 = n & 0x0000FFFF;
			if(and1 == 0)
				n >>= 16;
			int and2 = n & 0x000000FF;
			if(and2 == 0)
				n >>= 8;
			int and3 = n & 0x0000000F;
			if(and3 == 0)
				n >>= 4;
			if(n == 1 || n == 2 || n == 4 || n == 8)
				return true;
			return false;
		}
};


int main(void)
{
	return 0;
}

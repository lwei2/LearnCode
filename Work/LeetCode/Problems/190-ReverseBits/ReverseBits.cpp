/*************************************************************************
    > File Name: ReverseBits.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		uint32_t reverseBits(uint32_t n)
		{
			uint32_t tmp = 0;
			uint32_t reverse = 0;
			for(uint32_t i = 32; i > 0; i--)
			{
				tmp = (n >> i - 1) & 1;
				reverse |= tmp << (32-i);
			}
			return reverse;
		}
};

int main(void)
{
	return 0;
}

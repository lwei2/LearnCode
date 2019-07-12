/*************************************************************************
    > File Name: Numberof1Bits.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int hammingWeight1(uint32_t n)
		{
			unsigned int tmp = n - ((n>>1) & 033333333333) - ((n>>2) & 0111111111111);
			return ((tmp+(tmp>>3)) & 030707070707) % 63;
		}

	public:
		int hammingWeight2(uint32_t n)
		{
			int count = 0;
			for(unsigned int i = n; i; i -= i && (-i))
				count++;
			return count;
		}
};
int main(void)
{

}

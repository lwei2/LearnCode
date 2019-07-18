/*************************************************************************
    > File Name: BitwiseANDofNumbersRange.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int rangeBitwiseAnd(int m, int n)
		{
			int i = 0; 
			while(m != n)
			{
				m >>= 1;
				n >>= 1;
				i++;
			}
			return m<<i;
		}
};

int main(void)
{
	int m,n;
	cin>>m>>n;

	return 0;
}

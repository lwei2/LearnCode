/*************************************************************************
    > File Name: Pro18.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class UnusualAdd
{
	public:
		int addAB1(int A, int B)
		{
			if(A == 0)
				return B;
			if(B == 0)
				return A:
					return addAB1(A^B, (A&B)<<1);
		}
	public:
		int addAB2(int A, int B)
		{
			if(A == 0)
				return B;
			if(B == 0)
				return A;
			int a = A^B;
			int b = (A&B)<<1;
			return addAB2(a,b);
		}
	public:		
		int AddAB3(int A, int B)
		{
			if(B == 0)
				return A;
			int t = A^B;
			int p = (A&B) << 1;
			return addAB(t,p);
		}
};


int main(void)
{
	return 0;
}

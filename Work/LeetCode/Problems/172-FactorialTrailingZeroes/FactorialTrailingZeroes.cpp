/*************************************************************************
    > File Name: FactorialTrailingZeroes.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int trailingZeroes1(int n)
		{
			int k;
			for(k = 0; ;k++)
			{
				if(pow(5,k) > n)
					break;
			}
			int cnt = 0;
			for(int i= 1; i < k; i++)
				cnt += n/(pow(5,i));
			return cnt;
		}
	public:
		int trailingZeroes2(int n)
		{
			return n == 0 ? 0 : n/5 + trailingZeroes2(n/5);
		}
};

int main(void)
{
	int Example1 = 3;
	int Example2 = 5;
	Solution s;
	cout<<s.trailingZeroes(Example1)<<endl;
	cout<<s.trailingZeroes(Example2)<<endl;
	return 0;
}

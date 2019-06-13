/*************************************************************************
    > File Name: Pro1060.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
	public:
		void LeftMostDigit(int &T)
		{
			int i;
			long long N;
			long long ans;
			double n;
			while(T--)
			{
				scanf("%lld",&N);
				n = (double)N;
				n = n*log10(n);
				n=n-(long long)n;
				ans = (long long)pow(10,n);
				printf("%lld\n",ans);
			}
		}
};

int main(void)
{
	int T;
	scanf("%d",&T);
	Solution s;
	s.LeftMostDigit(T);

	return 0;
}

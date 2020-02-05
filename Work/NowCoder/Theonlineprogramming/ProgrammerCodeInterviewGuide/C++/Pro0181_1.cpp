/*************************************************************************
    > File Name: Pro0181_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

const long long int mod = 1000000007;

int main(void)
{
	long long int n, inv[10007], last, now = 1;
	scanf("%lld",&n);
	if(n < 1 || n > 10000)
		return puts("error"),0;
	n++;
	inv[1] = 1;
	for(int i = 2; i <= n+1; i++)
		inv[i] = (mod- mod/i)*inv[mod%i]%mod;
	for(int i = 2; i <= n; i++)
	{
		last = now;
		now = last*(4LL*i -2LL)%mod*inv[i+1]%mod;
	}
	printf("%lld\n",last);
	return 0;
}

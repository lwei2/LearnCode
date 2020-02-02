/*************************************************************************
    > File Name: Pro0110_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int quickJoseph(long long int n, long long int m, long long int s = 1)
{
	if(m == 1)
		return (n-1+s)%n;
	long long int res = 0;
	for(long long int i = 2; i <= n;)
	{
		if(res + m < i)
		{
			long long int leap;
			if((i - res - 1)%(m - 1) == 0)
				leap = (i - res - 1)/(m-1) - 1;
			else
				leap = (i - res - 1)/(m-1);
			if(i + leap > n)
				return ((res + (n + 1 - i)*m) + s)%n;
			i += leap;
			res += leap*m;
		}
		else
		{
			res = (res + m)%i;
			i++;
		}
	}
	return (res + s)%n;
}

int main(void)
{
	long long int n,m;
	while(~scanf("%lld %lld",&n,&m))
	{
		long long int res = quickJoseph(n,m);
		if(0 == res)
			printf("%lld\n", n);
		else
			printf("%lld\n",res);
	}
	return 0;
}

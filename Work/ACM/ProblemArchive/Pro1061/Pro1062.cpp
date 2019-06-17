/*************************************************************************
    > File Name: Pro1062.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

long long RightMostDigit(long long N)	
{
	long long ans = N;
	long long res = 1;
	long long base = N;
	while(ans)
	{
		if(ans&1)
			res = res*base%10;
		base = base*base%10;
		ans/=2;
	}
	return res;
}


int main(void)
{
/*
	long long T;
	long long N;
	long long res = 0;
	scanf("%lld",&T);
	while(T--)
	{
		int sum = 1;
		scanf("%lld",&N);
		for(int i = 1; i <= N; i++)
		{
			sum *= N;
		}
		res = sum%10;
		if(res < 10)
			cout<<res<<endl;	
		else
			res = sum%10;
	
	}
	*/
	long long T;
	long long N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		cout<<RightMostDigit(N)<<endl;
	}

	return 0;
}

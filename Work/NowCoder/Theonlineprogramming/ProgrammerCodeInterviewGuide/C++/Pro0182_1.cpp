/*************************************************************************
    > File Name: Pro0182_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int mod = 1e9+7;

inline ll  fpm(ll a, ll b)
{
	ll ans = 1;
	while(b)
	{
		if(b&1)
			ans = ans*a%mod;
		a = (a*a)%mod;
		b >>= 1;
	}
	return ans;
}

inline ll fmm(ll a, ll b)
{
	ll ans = 0;
	while(b)
	{
		if(b&1)
			ans = (ans + a)%mod;
		a = (a + a)%mod;
		b >>= 1;
	}
	return ans;
}


int main(void)
{
	ll x;
	scanf("%lld",&x);
	ll xx = 1, yy;
	for(ll i = 1; i <= x; ++i)
		xx = (1ll*xx*i)%mod;
	yy = xx*(x+1)%mod;
	xx = fpm(xx,mod-2);
	yy = fpm(yy,mod-2);
	ll ans = 1;
	for(ll i = 1; i <= (x << 1); ++i)
		ans = (1ll*ans*i)%mod;
	ans = fmm(fmm(ans,xx)%mod,yy)%mod;
	printf("%lld\n",(ans)%mod);
	return 0;
}

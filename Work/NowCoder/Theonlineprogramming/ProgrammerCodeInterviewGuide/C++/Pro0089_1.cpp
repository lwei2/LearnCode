/*************************************************************************
    > File Name: Pro0089_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
long long int a[N];

int main(void)
{
	int n,k;
	long long int x, mx = 0;
	scanf("%d%d",&n,&k);
	for(int i = 1; i <= n; i++)
	{
		scanf("%lld",&a[i]);
		mx = max(a[i],mx);
	}
	long long int l = mx, r = 1e18;
	while(l < r)
	{
		long long int mid = (l+r)>>1;
		long long int sum = 0, cnt = 0;
		for(int i = 1; i <= n; i++)
		{
			if(sum + a[i] > mid)
			{
				sum = a[i];
				cnt++;
			}
			else
				sum += a[i];
		}
		cnt += (sum!=0);
		if(cnt <= k)
			r = mid;
		else
			l = mid + 1;
	}
	printf("%lld\n",l);
	return 0;
}



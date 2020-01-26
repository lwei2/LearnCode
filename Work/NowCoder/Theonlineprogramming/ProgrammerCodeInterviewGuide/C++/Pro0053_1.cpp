/*************************************************************************
    > File Name: Pro0053_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int init(int *dis, int *oil, int n)
{
	int init_val = -1;
	for(int i = 0; i < n; i++)
	{
		dis[i] = oil[i] - dis[i];
		if(dis[i] >= 0)
			init_val = i;
	}
	return init_val;
}

void solve(bool *ans, int *dis, int s, int e, int n)
{
	long long val = 0;
	while(s != e)
	{
		if(val > 0)
			val = 0;
		val += dis[s];
		if(val >= 0)
			ans[s] = true;
		s = (s - 1 + n)%n;
	}
}

int main(void)
{
	int n;
	cin>>n;
	int dis[n], oil[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&oil[i]);

	for(int i = 0; i < n; i++)
		scanf("%d",&dis[i]);

	int k = init(dis, oil, n);
	int s = k, e = (k+1)%n;

	bool flag = true;
	long long val = 0;
	bool ans[n];
	int last = (e - 1+n)%n;
	memset(ans, false, sizeof(ans));
	while(k != -1 && (s!=k || flag))
	{
		if(!flag && (e+1)%n == s)
			break;
		flag = false;
		val += dis[s];
		if(val >= 0)
		{
			while(e != s && val >= 0)
			{
				val += dis[e];
				e = (e+1)%n;
			}
			if(val >= 0)
			{
				ans[s] = true;
				solve(ans, dis, s-1, last, n);
				break;
			}
			else
			{
				last = (e-1+n)%n;
			}
		}
		s = ((s-1)+n)%n;
	}
	for(int i = 0; i < n; i++)
		cout<<ans[i]<<" ";

	return 0;
}

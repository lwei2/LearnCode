/*************************************************************************
    > File Name: Pro0152_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;


const int maxn= 1e5 + 5;
const int modd = 1e9 + 7;
int n,k;
int a[maxn];
priority_queue<int> pq;
unordered_map<int, int> hs;

int main(void)
{
	scanf("%d%d",&n,&k);
	for(int i = 0; i < n; ++i)
		scanf("%d",&a[i]);
	int psize = 0;
	for(int i = 0; i < n; ++i)
	{
		if(psize < k)
		{
			psize++;
			pq.push(a[i]);
		}
		else
		{
			if(a[i] < pq.top())
			{
				pq.pop();
				pq.push(a[i]);
			}
		}
	}
	while(!pq.empty())
	{
		hs[pq.top()]++;
		pq.pop();
	}
	for(int i = 0; i < n; ++i)
		if(hs[a[i]])
			printf("%d ",a[i]);
	return 0;
}


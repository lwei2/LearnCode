/*************************************************************************
    > File Name: Pro0155_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> s;
	map<int, int> m;
	int n,k,t;
	int count = 0;
	scanf("%d%d",&n,&k);
	int tar = n/k;
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&t);
		if(m.find(t) != m.end())
			m[t]++;
		else
		{
			m[t] = 1;
			s.push_back(t);
		}
	}
	for(int j = 0; j < s.size(); j++)
	{
		int a = s[j];
		if(m[a] > tar)
		{
			printf("%d ",a);
			count++;
		}
	}
	if(0 == count)
		printf("-1");
	return 0;
}

/*************************************************************************
    > File Name: Pro1051.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

using namespace std;

struct wood
{
	int l,w,flag;
}W[5001];

bool cmp(wood a, wood b)
{
	return a.l != b.l ? a.l > b.l : a.w > b.w;
}

int main(void)
{
	int t;
	int n;
	int ans;
	int min;
	cin>>t;
	while(t--)
	{
		ans = 0;
		cin>>n;
		for(int i = 0; i < n; i++)
		{
			cin>>W[i].l>>W[i].w;
			W[i].flag = 0;
		}
		sort(W,W+n,cmp);
		for(int i = 0; i < n; i++)
		{
			if(W[i].flag == 1)
				continue;
			ans++;
			W[i].flag=1;
			min = W[i].w;
			for(int j = i + 1; j < n; j++)
			{
				if(W[j].w <= min && W[j].flag == 0)
				{
					min = W[j].w;
					W[j].flag = 1;
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

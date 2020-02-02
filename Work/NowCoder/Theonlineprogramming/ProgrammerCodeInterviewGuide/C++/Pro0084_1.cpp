/*************************************************************************
    > File Name: Pro0084_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct cmp
{
	bool operator()(const pair<int, string> p1, const pair<int, string>p2)
	{
		if(p1.first == p2.first)
			return p1.second < p2.second;
		return p1.first > p2.first;
	}
};

int main(void)
{
	int n,k;
	scanf("%d %d",&n, &k);
	priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> pq;
	unordered_map<string, int> mp;
	string str;
	for(int i = 0; i < n; i++)
	{
		cin>>str;
		if(mp.find(str) == mp.end())
			mp[str] = 1;
		else
			mp[str]++;
	}
	for(auto & p : mp)
	{
		pq.push({p.second,p.first});
		while(!pq.empty() && pq.size() > k)
		{
			pq.pop();
		}
	}
	vector<pair<int, string> > vp(k);
	int i = k - 1;
	while(!pq.empty())
	{
		vp[i--] = pq.top();
		pq.pop();
	}
	for(int i = 0; i < k; i++)
	{
		cout<<vp[i].second<<" "<<vp[i].first<<endl;		
	}
	return 0;
}

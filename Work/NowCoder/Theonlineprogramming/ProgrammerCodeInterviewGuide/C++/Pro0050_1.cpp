/*************************************************************************
    > File Name: Pro0050_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int main(void)
{
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	const long long mod = 1e9 + 7;
	long long n,w,k;
	vector<pair<int, int>> p;
	
	cin>>n>>w>>k;
	p.resize(n);
	for(int i = 0; i < n; ++i)
		cin>>p[i].first;
	for(int i = 0; i < n; ++i)
		cin>>p[i].second;

	sort(p.begin(), p.end());

	priority_queue<int> able;
	
	int ans = 0;
	for(int i = 0; i < n && k > 0; ++i)
	{
		while(k > 0 && p[i].first > w)
		{
			if(able.empty())
			{
				cout<<w;
				return 0;
			}
			w += able.top();
			--k;
			able.pop();
		}
		able.push(p[i].second);
	}
	
	while(k > 0 && !able.empty())
	{
		w += able.top();
		--k;
		able.pop();
	}
	cout<<w;
	return 0;
}

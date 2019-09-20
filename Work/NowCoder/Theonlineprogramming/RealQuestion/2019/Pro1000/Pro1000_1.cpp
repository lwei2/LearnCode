/*************************************************************************
    > File Name: Pro1000_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

using LL = int64_t;
using LD = long double;
const LL INF = 0x3f3f3f;
const LL mod = 1e9 + 7;


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<pair<int, int>> a(n);
	for(auto &i : a)
		cin>>i.first>>i.second;
	sort(a.begin(), a.end());
	vector<int> b(n);
	b[0] = a[0].second;
	for(int i = 1; i < n; i++)
		b[i] = max(a[i].second, b[i-1]);
	for(int i = 0; i < m; i++)
	{
		int v;
		cin>>v;
		auto x = upper_bound(a.begin(), a.end(), pair<int, int>(v, 1000000005)) - a.begin();
		cout<<b[x-1]<<'\n';
	}
	return 0;
}

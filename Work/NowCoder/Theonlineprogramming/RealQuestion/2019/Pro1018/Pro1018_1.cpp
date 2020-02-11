/*************************************************************************
    > File Name: Pro1018_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <climits>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;

	vector<int> dp;
	vector<pair<int, int>> items;
	for(int i = 0; i < n; i++)
	{
		int l,w;
		cin>>w>>l;
		items.push_back(pair<int,int> (w,l));
	}
	sort(items.begin(), items.end());
	dp.push_back(items[0].second);
	for(int i = 1; i < n; i++)
	{
		if(items[i].second >= dp.back())
			dp.push_back(items[i].second);
		else
			*upper_bound(dp.begin(), dp.end(), items[i].second) = items[i].second;
	}
	cout<<dp.size();

	return 0;
}

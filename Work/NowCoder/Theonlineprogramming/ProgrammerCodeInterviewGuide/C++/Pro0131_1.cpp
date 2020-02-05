/*************************************************************************
    > File Name: Pro0131_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin>>n;
	vector<int> arr(n,0);
	unordered_map<int, int> mp;
	for(int i = 0; i < n; ++i)
		cin>>arr[i];
	int ans = 0, left = 0, right = 0, tmp = 0;
	for(int i = 0; i < n; ++i)
	{
		if(mp.find(arr[i]) != mp.end() && mp[arr[i]] >= left)
		{
			tmp = i - mp[arr[i]];
			left = mp[arr[i]] + 1;
			mp[arr[i]] = i;
		}
		else
		{
			mp[arr[i]] = i;
			++tmp;
		}
		ans = max(tmp, ans);
	}
	cout<<ans<<endl;
	return 0;
}

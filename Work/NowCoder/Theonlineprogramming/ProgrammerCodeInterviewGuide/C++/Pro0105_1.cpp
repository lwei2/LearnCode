/*************************************************************************
    > File Name: Pro0105_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	scanf("%d",&n);

	int v[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&v[i]);

	int pos = max_element(v, v+n) - v;
	stack<pair<int, int>> st;
	int ans = 0, z = 0;
	for(int i = pos; z < n; i = (i+1)%n,z++)
	{
		if(st.empty() || st.top().first > v[i])
			st.push({v[i],1});
		else if(st.top().first == v[i])
			st.top().second++;
		else
		{
			while(st.top().first < v[i])
			{
				ans += 2*st.top().second + st.top().second*(st.top().second - 1)/2;
				st.pop();
			}
			if(st.top().first == v[i])
				st.top().second++;
			else
				st.push({v[i],1});
		}
	}
	while(!st.empty())
	{
		if(st.size() > 2)
		{
			ans += 2*st.top().second + st.top().second*(st.top().second - 1)/2;
			st.pop();
		}
		else if(st.size() == 2)
		{
			pair<int,int> p =st.top();
			st.pop();
			if(st.top().second >= 2)
				ans += 2*p.second + p.second*(p.second - 1)/2;
			else
				ans += p.second + p.second * (p.second - 1)/2;
		}
		else
		{
			ans += st.top().second*(st.top().second - 1)/2;
			st.pop();
		}
	}
	cout<<ans<<endl;
	return 0;
}

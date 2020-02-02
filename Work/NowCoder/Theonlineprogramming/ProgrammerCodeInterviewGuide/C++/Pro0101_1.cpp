/*************************************************************************
    > File Name: Pro0101_1.cpp
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
	scanf("%d",&n);
	vector<int> arr(n);
	for(int i = 0; i < n; i++)
		scanf("%d",&arr[i]);
	vector<pair<int, int>> res(n);
	stack<int> s;
	for(int i = 0; i < n; i++)
	{
		while(!s.empty() && arr[s.top()] > arr[i])
		{
			int tmpx = s.top();
			s.pop();
			res[tmpx].second = i;
			if(!s.empty())
				res[tmpx].first = s.top();
			else
				res[tmpx].first = -1;
		}
		s.push(i);
	}
	while(!s.empty())
	{
		int tmpx = s.top();
		s.pop();
		res[tmpx].second = -1;
		if(!s.empty())
			res[tmpx].first = s.top();
		else
			res[tmpx].first = -1;
	}
	for(int i = 0; i < n; i++)
		printf("%d %d\n", res[i].first, res[i].second);
	return 0;
}

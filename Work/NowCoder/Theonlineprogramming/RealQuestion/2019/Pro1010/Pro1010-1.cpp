/*************************************************************************
    > File Name: Pro1010-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;


int main(void)
{
	int n,m;
	std::iostream::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	int app[100000] = {0};
	for(int i = 0; i < n; i++)
		cin>>app[i];
	cin>>m;
	vector<pair<int, int>> vec(m);
	for(int i = 0; i < m; i++)
	{
		cin>>vec[i].first;
		vec[i].second = i;
	}
	for(int i = 1; i < n; i++)
		app[i] += app[i-1];
	sort(vec.begin(), vec.end());
	int j = 0;
	vector<int> display(m);
	for(int i = 0; i < m; i++)
	{
		while(vec[i].first > app[j])
			j++;
		display[vec[i].second] = j + 1;
	}
	for(int i = 0; i < m; i++)
		printf("%d\n",display[i]);
	/*
	cin>>m;
	for(int i = 0; i != m; ++i)
	{
		cin>>q;
		cout<<lower_bound(appsum.begin(), appsum.end(), make_pair(q,0))->second<<endl;
	}
	 */
	return 0;
}

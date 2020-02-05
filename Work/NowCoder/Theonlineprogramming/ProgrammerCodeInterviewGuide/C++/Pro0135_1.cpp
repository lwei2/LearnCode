/*************************************************************************
    > File Name: Pro0135_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void manacher(const string &s)
{
	int mid = 0;
	int max_right = 0;
	string news;
	for(int i = 0; i < s.size(); i++)
		news = news + "#" + s[i];
	news += "#";
	vector<int> v(news.size(), 1);
	pair<int,int> p;
	for(int i = 1; i < news.size(); i++)
	{
		if(max_right > i)
			v[i] = min(max_right - i, v[2*mid - i]);
		while(i + v[i] < news.size() && i - v[i] >= 0 && news[i + v[i]] == news[i-v[i]])
			v[i]++;
		if(v[i] + i > max_right)
			max_right = v[i] + i, mid = i;
		if(v[i] > p.second)
			p.first = i, p.second = v[i];
	}
	int n = news.size();
	int dp[n+1];
	memset(dp,0,sizeof(dp));
	dp[0] = -1;
	for(int i = 0; i < n; i++)
		dp[i+1] = 1e8;
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < v[i] + i; j++)
			dp[j+1] = min(dp[j+1], dp[2*i - j] + 1);
	}
	cout<<min(dp[n],dp[n-1])<<endl;
}

int main(void)
{
	string str;
	cin>>str;
	manacher(str);
	return 0;
}

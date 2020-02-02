/*************************************************************************
    > File Name: Pro0087_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void helper(const string &str, const string &match, vector<int>& res)
{
	int n = str.size();
	int m = match.size();
	if(m > n)
		return;
	int pos = 0;
	while(n - pos >= m)
	{
		if(str[pos] == match[0])
		{
			int len = 0;
			while(len < m  && str[pos + len] == match[len])
				++len;
			if(len == m)
				res.emplace_back(pos);
		}
		++pos;
	}
	return;
}

int main(void)
{
	string str;
	string match;
	cin>>str>>match;
	vector<int> res;
	res.emplace_back(-1);
	helper(str,match, res);
	if(res.size() > 1)
		for(int i = 1; i < res.size(); ++i)
			cout<<res[i]<<" ";
	else
		cout<<-1<<endl;

	return 0;
}

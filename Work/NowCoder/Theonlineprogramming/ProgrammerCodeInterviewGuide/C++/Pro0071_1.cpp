/*************************************************************************
    > File Name: Pro0071_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string to_str(int key, int base, string chs)
{
	int flag = 0;
	string res = "";
	while(key)
	{
		int tmp = key%base - flag;
		if(tmp <= 0)
		{
			flag = 1;
			res += chs[chs.size() - 1 + tmp];
		}
		else
		{
			flag = 0;
			res += chs[tmp-1];
		}
		key = key/base;
	}
	reverse(res.begin(), res.end());
	if(flag)
		res = res.substr(1);
	return res;
}

int to_num(string key, int base, map<char, int> mp)
{
	int res = 0;
	int index = 0;
	for(int i = key.size() - 1; i >= 0; --i)
	{
		res += mp[key[i]]*pow(base, index++);
	}
	return res;
}

int main(void)
{
	int opt,base;
	map<char, int> mp;
	cin>>opt>>base;
	string chs;
	cin>>chs;
	for(int i = 0; i < chs.size(); ++i)
		mp[chs[i]] = i + 1;
	if(opt == 1)
	{
		int key;
		cin>>key;
		string ans = to_str(key,base, chs);
		cout<<ans<<endl;
	}
	else if(opt == 2)
	{
		string key;
		cin>>key;
		int ans = to_num(key, base, mp);
		cout<<ans<<endl;
	}
	return 0;
}

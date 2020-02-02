/*************************************************************************
    > File Name: Pro0116_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
const int modd = 1e9 + 7;

int main(void)
{
	ios::sync_with_stdio(false);
	string str;
	while(cin>>str)
	{
		int l = 0, r = str.length() - 1;
		while(l < r)
		{
			str[l] = str[l]^str[r];
			str[r] = str[l]^str[r];
			str[l] = str[l]^str[r];
			l++,r--;
		}
		cout<<str<<" ";
	}
	return 0;
}

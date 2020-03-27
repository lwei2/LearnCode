/*************************************************************************
    > File Name: Pro1074_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int center(string s, int l, int r)
{
	int L = l;
	int R = r;
	while(L >= 0 && R < s.length() && s[R] == s[L])
	{
		L--;
		R++;
	}
	return R-L-1;
}

string longestPalindrome(string &s)
{
	int len = s.size();
	if(len == 0 || len == 1)
		return s;
	int start = 0, end = 0, max_len = 0;
	for(int i = 0; i < len; i++)
	{
		int len1 = center(s,i,i);
		int len2 = center(s,i,i+1);
		max_len = max(max(len1, len2),max_len);
		if(max_len > end-start + 1)
		{
			start = i - (max_len - 1)/2;
			end = i + max_len/2;
		}
	}
	return s.substr(start, max_len);
}

int main(void)
{
	string str;
	cin>>str;
	string res = longestPalindrome(str);
	cout<<res;
	return 0;
}

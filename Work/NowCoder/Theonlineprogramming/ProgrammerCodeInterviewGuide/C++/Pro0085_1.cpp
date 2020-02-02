/*************************************************************************
    > File Name: Pro0085_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string preProcess(const string &s)
{
	int n = s.length();
	if(0 == n)
		return "^$";
	string ret = "^";
	for(int i = 0; i < n; i++)
		ret += "#" + s.substr(i,1);
	ret += "#$";
	return ret;
}


string longestPalindrome(string s)
{
	string T = preProcess(s);
	int n = T.length();
	int *P = new int[n];
	int C = 0, R = 0;
	for(int i = 1; i < n - 1; i++)
	{
		int i_mirror = 2 * C - i;
		P[i] = (R > i) ? min(R-i, P[i_mirror]) : 0;
		while(T[i+1+P[i]] == T[i-1-P[i]])
			P[i]++;
		if(i+P[i] > R)
		{
			C = i;
			R = i + P[i];
		}
	}
	int maxLen = 0;
	int centerIndex = 0;
	for(int i = 1; i < n - 1; i++)
	{
		if(P[i] > maxLen)
		{
			maxLen = P[i];
			centerIndex = i;
		}
	}
	delete[] P;
	return s.substr((centerIndex - 1 - maxLen)/2, maxLen);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	string s;
	getline(cin,s);
	cout<<longestPalindrome(s).size()<<endl;
	return 0;
}

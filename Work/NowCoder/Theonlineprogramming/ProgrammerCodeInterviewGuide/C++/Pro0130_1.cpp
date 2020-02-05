/*************************************************************************
    > File Name: Pro0130_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &str1, const string &str2)
{
	return str1 + str2 < str2 + str1;
}

string min_str(vector<string> &strs)
{
	if(strs.empty())
		return "";
	sort(strs.begin(), strs.end(), cmp);
	string res;
	for(auto str : strs)
		res += str;
	return res;
}

int main(void)
{
	int len;
	cin>>len;
	vector<string> strs(len);
	for(int i = 0; i < len; ++i)
		cin>>strs[i];
	cout<<min_str(strs);
	return 0;
}

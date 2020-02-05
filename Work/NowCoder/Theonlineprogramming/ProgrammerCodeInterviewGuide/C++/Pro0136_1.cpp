/*************************************************************************
    > File Name: Pro0136_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

bool isValid(string &str, string &exp)
{
	for(int i = 0; i < static_cast<int>(str.size()); ++i)
		if(str[i] == '.' || str[i] == '*')
			return false;
	if(exp[0] == '*')
		return false;
	for(int i = 1; i < static_cast<int>(exp.size()); ++i)
		if(exp[i] == '*' && exp[i-1] == '*')
			return false;
	return true;
}

bool isMatch(string &str, string &exp, int si, int ei)
{
	if(ei == static_cast<int>(exp.size()))
	{
		return si == static_cast<int>(str.size());
	}

	if(ei + 1 == static_cast<int>(exp.size()) || exp[ei + 1] != '*')
	{
		if(si != static_cast<int>(str.size()) && (exp[ei] ==str[si] || exp[ei] == '.'))
			return isMatch(str,exp, si+1, ei+1);
		else
			return false;
	}
	else if(ei + 1 != static_cast<int>(exp.size())&&exp[ei+1] == '*')
	{
		if(si != static_cast<int>(str.size()) && (str[si] != exp[ei] && exp[ei] != '.'))
			return isMatch(str, exp, si, ei + 2);
		else
		{
			while(si != static_cast<int>(str.size()) && (str[si] == exp[ei] == '.'))
			{
				if(isMatch(str,exp, si+1, ei+2))
					return true;
				si++;
			}
		}
	}
}

int main(void)
{
	string str, exp;
	getline(cin,str);
	getline(cin,exp);
	if(!isValid(str, exp))
	{
		cout<<"NO"<<endl;
		return 0;
	}
	bool match = isMatch(str, exp, 0, 0);
	if(match)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

/*************************************************************************
    > File Name: Pro0125_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string Getress(string &s1, string &s2)
{
	string res;
	int n1 = s1.length();
	int pos = 0, i = 0, j = n1 - 1;
	for(; i <= j;)
	{
		if(s1[i] != s2[pos])
		{
			res += s1[i];
			i++;
		}
		else if(s1[j] != s2[pos])
		{
			res += s1[j];
			j--;
		}
		else
		{
			res += s2[pos];
			pos++;
			i++;
			j--;
		}		
	}
	cout<<res;
	if(s2.length() % 2 != 0)
		res.pop_back();
	reverse(res.begin(), res.end());
	return res;
}

int main(void)
{
	string s1, s2;
	cin>>s1>>s2;
	cout<<Getress(s1, s2)<<endl;
	return 0;
}

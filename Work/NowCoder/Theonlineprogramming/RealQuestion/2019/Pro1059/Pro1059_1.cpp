/*************************************************************************
    > File Name: Pro1059_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
	string str1, str2, res;
	cin>>str1>>str2;
	while(str1.size() < str2.size())
		str1 = '0' + str1;
	while(str2.size() > str1.size())
		str2 = '0' + str2;
	int flag = 0, m = 0;
	for(int i = 0; i < str1.size(); i++)
	{
		int n = str1[i] - '0' + str2[i] - '0' + flag;
		m = n%2;
		res = to_string(m) + res;
		flag = n/2;
	}
	if(flag)
		res = '1' + res;
	cout<<res;
	return 0;
}

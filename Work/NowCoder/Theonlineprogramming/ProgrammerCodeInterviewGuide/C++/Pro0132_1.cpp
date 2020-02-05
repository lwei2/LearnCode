/*************************************************************************
    > File Name: Pro0132_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	string ans;
	bool flag = false;
	for(int i = 0; i < n;)
	{
		if(str[i] <= 'z' &&  str[i] >= 'a')
		{
			flag = false;
			++i;
		}
		else
		{
			flag = true;
			i = i + 2;
		}
		if(k < i)
		{
			if(flag)
			{
				cout<<str[i-2]<<str[i-1]<<endl;
				return 0;
			}
			else
			{
				cout<<str[i-1]<<endl;
				return 0;
			}
		}
	}
	return 0;
}

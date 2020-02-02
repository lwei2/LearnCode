/*************************************************************************
    > File Name: Pro0098_1.cpp
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
	int num = 1;
	string str;
	string ans = "";
	ios::sync_with_stdio(false);
	cin>>str;
	stringstream ss;
	ss<<str[0];


	for(int i = 1; str[i]; ++i)
	{
		if(str[i] == str[i-1])
			num++;
		else
		{
			ss<<"_"<<num<<"_"<<str[i];
			num = 1;
		}
	}
	ss<<"_"<<num;
	cout<<ss.str()<<endl;
	return 0;
}

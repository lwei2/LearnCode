/*************************************************************************
    > File Name: Pro1047.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

string add(string str1, string str2)
{
	string str;
	int len1 = str1.length();
	int len2 = str2.length();
	if(len1 < len2)
	{
		for(int i = 1; i <= len2 - len1; i++)
			str1 = "0" + str1;
	}
	else
	{
		for(int i = 1; i<= len1 - len2; i++)
			str2 = "0" + str2;
	}
	len1 = str1.length();
	int cf = 0;
	int tmp;
	for(int i = len1 - 1; i >= 0; i--)
	{
		tmp = str1[i] - '0' + str2[i] -'0' +cf;
		cf = tmp/10;
		tmp%=10;
		str = char(tmp+'0') + str;
	}
	if(cf!=0)
		str = char(cf + '0')+str;
	return str;
}

int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		string sum = "0";
		string str1;
		while(cin>>str1)
		{
			if(str1 == "0")
				break;
			sum=add(sum, str1);
		}
		cout<<sum<<endl;
		if(T>0)
			cout<<endl;
	}
	return 0;
}

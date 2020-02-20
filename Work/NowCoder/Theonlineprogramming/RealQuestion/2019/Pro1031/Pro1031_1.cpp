/*************************************************************************
    > File Name: Pro1031_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int i,k;
	int num = 0;
	int ans = 0;
	string str;
	cin>>str;
	if(str[0] == '-')
	{
		for(i = 1; str[i] != '+' && str[i] != '-' && i < str.length(); i++)
		{
			num = num*10 + str[i] - '0';
		}
		num = 0 - num;
	}
	else
	{
		for(i = 0; str[i] != '+' && str[i] != '-' && i < str.length(); i++)
		{
			num = num*10 + str[i] - '0';
		}		
	}
	ans = num;
	for(int j = i; j < str.length(); j++)
	{
		if(str[j] == '+' || str[j] == '-')
		{
			num = 0;
			for(k = j + 1; str[k] != '+' && str[k] != '-' && k < str.length(); k++)
			{
				num = num*10 + str[k] - '0';
			}
			if(str[j] == '+')
				ans += num;
			else
				ans -= num;
		}
	}
	cout<<ans<<endl;
	return 0;
}

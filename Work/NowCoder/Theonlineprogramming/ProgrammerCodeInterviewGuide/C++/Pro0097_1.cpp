/*************************************************************************
    > File Name: Pro0097_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
#include <algorithm>
#include <limits.h>
#include <string>

using namespace std;

int main(void)
{
	string str;
	cin>>str;

	int i = 0;
	int sign = 1;
	int maxq = INT_MAX/10;
	int maxr = INT_MAX%10;
	int len = str.size();
	unsigned int result = 0;

	if(str[i] == '-')
	{
		sign = -1;
		++i;
	}
	if(str[i] <= '0' || str[i] > '9')
	{
		cout<<"0"<<endl;
		return 0;
	}
	while(i < static_cast<int>(str.size()))
	{
		if(str[i] < '0' || str[i] > '9')
		{
			cout<<"0"<<endl;
			return 0;
		}
		result = result * 10 + (str[i] - 48);
		if(result > maxq && i != len - 1)
		{
			cout<<"0"<<endl;
			return 0;
		}
		if(result == maxq && i != len - 1)
		{
			int last = str[i + 1] - '0';
			if(sign == 1 && last > 7)
			{
				cout<<"0"<<endl;
				return 0;				
			}
			else if(sign == -1 && last > 8)
			{
				cout<<"0"<<endl;
				return 0;
			}
		}
		++i;
	} 
	if(sign == -1)
		cout<<"-";
	cout<<result<<endl;
	return 0;	
}

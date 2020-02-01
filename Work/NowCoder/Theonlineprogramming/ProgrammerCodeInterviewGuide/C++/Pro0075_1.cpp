/*************************************************************************
    > File Name: Pro0075_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int num[100005];

int main(void)
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	for(int i = 0; i < n; ++i)
		cin>>num[i];
	int begin = 0, end = n-1;
	bool flag = false;
	if(num[begin] <= num[end])
	{
		while(begin < end && k > num[begin] && k < num[end])
		{
			++begin;
			--end;
		}
		if(k == num[begin] || k == num[end])
		{
			flag = true;
		}
	}
	else
	{
		while(begin <= end && num[begin] > num[end])
		{
			if(k == num[begin] || k == num[end])
			{
				flag = true;
				break;
			}
			else if(k < num[end])
			{
				--end;
				++begin;
			}
			else if(k > num[begin])
			{
				--end;
				++begin;
			}
			else
				break;
		}
	}
	if(flag)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}

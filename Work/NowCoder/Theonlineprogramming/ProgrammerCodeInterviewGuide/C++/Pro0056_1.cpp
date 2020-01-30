/*************************************************************************
    > File Name: Pro0056_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	long long n;
	cin>>n;
	if(n < 5)
		cout<<0<<endl;
	else
	{
		long long res = 0;
		while(n)
		{
			res += n/5;
			n/=5;
		}
		cout<<res<<endl;
	}
	return 0;
}

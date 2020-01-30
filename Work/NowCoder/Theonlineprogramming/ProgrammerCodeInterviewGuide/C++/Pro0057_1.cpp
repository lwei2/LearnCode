/*************************************************************************
    > File Name: Pro0057_1.cpp
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
	long long ans = 0;
	while(n/2 != 0)
	{
		ans += (n/2);
		n/=2;
	}
	cout<<ans<<endl;
	return 0;
}

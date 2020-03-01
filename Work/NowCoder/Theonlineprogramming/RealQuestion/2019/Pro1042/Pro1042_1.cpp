/*************************************************************************
    > File Name: Pro1042_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

int main(void)
{
	int n, ans;
	cin>>n;
	int a = 1, b = 2;
	int c = n;
	for(int i = 3; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	ans = c;
	cout<<ans<<endl;
	return 0;
}

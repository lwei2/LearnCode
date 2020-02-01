/*************************************************************************
    > File Name: Pro0073_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool judge(int n)
{
	if(n == INT_MIN)
		return false;
	if(n < 0)
		n = -n;
	int help = 1;
	while(n/help >= 10)
		help*=10;
	while(n)
	{
		if(n/help != n%10)
			return false;
		n = (n%help)/10;
		help/=100;
	}
	return true;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	bool res = judge(n);
	if(res)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

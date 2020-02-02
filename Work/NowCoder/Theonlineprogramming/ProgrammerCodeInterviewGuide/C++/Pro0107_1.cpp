/*************************************************************************
    > File Name: Pro0107_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int n,a[1000010];

int main(void)
{
	while(~scanf("%d",&n))
	{
		for(int i = 1; i <= n; ++i)
			scanf("%d", &a[i]);
		for(int i = n; i >= 1; --i)
			printf("%d ",a[i]);
		puts("");
	}
	return 0;
}

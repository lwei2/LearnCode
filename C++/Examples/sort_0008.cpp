/*************************************************************************
    > File Name: sort_0008.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(void)
{
	int n,a[1001];
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	sort(a+1,a+n+1);
	for(int i = 1; i <= n; i++)
		printf("%d",a[i]);
	return 0;
}

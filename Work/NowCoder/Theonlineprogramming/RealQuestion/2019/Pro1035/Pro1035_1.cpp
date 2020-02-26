/*************************************************************************
    > File Name: Pro1035_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;


int main(void)
{
	int n;
	int k = 1;
	scanf("%d",&n);
	while(k < n)
	{
		n -= k;
		k++;
	}
	printf("%d",k);
	return 0;
}

/*************************************************************************
    > File Name: Pro1029.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(void)
{
	int i,n;
	int number[999999];
	while(scanf("%d",&n)!=EOF)
	{
		for(i = 0; i < n; i++)
			scanf("%d",&number[i]);
		sort(number, number+n);
		i = (n+1)/2 - 1;
		printf("%d\n",number[i]);
	}
	return 0;
}

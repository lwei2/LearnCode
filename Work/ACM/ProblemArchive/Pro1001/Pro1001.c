/*************************************************************************
    > File Name: Pro1001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :Sum Problem
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	int n;
	int sum;
	while(EOF!=scanf("%d",&n))
	{
		sum = 0;
		for(int i = 1; i <= n; i++)
			sum+=i;
		printf("%d\n\n",sum);
	}
	return 0;
}

/*************************************************************************
    > File Name: Pro1035_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int n,i;
	int sum = 0;
	scanf("%d",&n);
	if(n == 1)
		printf("%d",1);
	else
	{
		for(i = 0; sum < n; i++)
		{
			sum += i;
		}
		printf("%d",i-1);
	}
	return 0;
}

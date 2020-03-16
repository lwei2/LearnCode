/*************************************************************************
    > File Name: Pro1052_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int s, i= 1;
	scanf("%d",&s);
	int k,sum = 0;
	while(1)
	{
		sum = sum + i;
		if(sum == s)
		{
			k = i;
			break;
		}
		else
			if(sum > s && (sum - s)%2 == 0)
			{
				k = i;
				break;
			}
		++i;
	}
	printf("%d",k);
	return 0;
}

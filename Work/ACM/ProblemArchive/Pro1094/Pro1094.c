/*************************************************************************
    > File Name: Pro1094.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i;
	int N;
	int num, sum;
	while(scanf("%d",&N)!=EOF)
	{
		sum = 0;
		for(i = 0; i < N; i++)
		{
			scanf("%d",&num);
			sum += num;
		}
		printf("%d\n",sum);
	}
	return 0;
}

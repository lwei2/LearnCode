/*************************************************************************
    > File Name: Pro1093.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j,k;
	int N,M,sum;
	while(scanf("%d",&N)!=EOF)
	{
		for(i = 0; i < N; i++)
		{
			sum = 0;
			scanf("%d",&M);
			for(k = 0; k < M; k++)
			{
				scanf("%d",&j);
				sum += j;
			}
			printf("%d\n",sum);
		}
	}
	return 0;
}

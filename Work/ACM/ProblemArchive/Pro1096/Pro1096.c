/*************************************************************************
    > File Name: Pro1096.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j,k;
	int N,M,num,sum;
	scanf("%d\n",&N);
	while(N--)
	{
		sum = 0;
		scanf("%d",&M);
		for(j = 0; j < M; j++)
		{
			scanf("%d",&num);
			sum += num;
		}
		printf("%d\n",sum);
		if(N > 0)
			printf("\n");
	}
	return 0;
}

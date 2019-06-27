/*************************************************************************
    > File Name: Pro1092.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j;
	int N,sum;
	while(scanf("%d",&N)!=EOF)
	{
		sum = 0;
		if(N==0)
			continue;
		for(i = 0; i < N; i++)
		{
			scanf("%d",&j);
			sum += j;
		}
		printf("%d\n",sum);
	}
	return 0;
}

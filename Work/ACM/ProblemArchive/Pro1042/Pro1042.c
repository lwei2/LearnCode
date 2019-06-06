/*************************************************************************
    > File Name: Pro1042.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int N;
	int t,g;
	int i,j;
	long result[10000];
	while(scanf("%d",&N)!=EOF)
	{
		result[0] = 1;
		t = 1;
		for(i = 1; i <= N; i++)
		{
			g = 0;
			for(j = 0; j < t; j++)
			{
				result[j] = result[j]*i + g;
				g = result[j]/10000;
				result[j] = result[j]%10000;
			}
			if(g > 0)
			{
				result[t] = g;
				t++;
			}
		}
		printf("%ld",result[t-1]);
		for(i = t-2; i >= 0; i--)
		{
			printf("%4.4ld",result[i]);
		}
		printf("\n");
	}
	return 0;
}

/*************************************************************************
    > File Name: Pro0001_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int N,M,K;
	scanf("%d%d%d",&N,&M,&K);
	int nMatrix[N][M];
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			scanf("%d",&nMatrix[i][j]);
		}
	}
/*
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
*/
	int nFlag = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if(K == nMatrix[i][j])
				nFlag = 1;
		}
	}
	if(nFlag)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

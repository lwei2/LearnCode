/*************************************************************************
    > File Name: Pro1060_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j,k;
	int n,temp;
	scanf("%d",&k);
	scanf("%d",&n);
	int M[n*n];
	for(i = 0; i < n*n; i++)
		scanf("%d",&M[i]);
	for(i = 1; i < n*n - 1; i++)
	{
		for(j = i; j < n*n - 1; j++)
		{
			if(M[j] < M[i])
			{
				temp = M[j];
				M[j] = M[i];
				M[i] = temp;
			}
		}
	}
	printf("%d",M[k-1]);
	return 0;
}

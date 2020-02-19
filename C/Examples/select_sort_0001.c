/*************************************************************************
    > File Name: select_sort_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void select_sort(int A[], int n)
{
	int i,j,min,m;
	for(i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if(A[min] > A[j])
				min = j;
		}
		if(min != i)
		{
			swap(&A[min], &A[i]);
			printf("select sort:\n");
			for(m = 0; m < n; m++)
			{
				if(m > 0)
					printf(" ");
				printf("%d ",A[m]);
			}
			printf("\n");
		}
	}
}

int main(void)
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		int i;
		int *A = (int*)malloc(sizeof(int)*n);
		for(i = 0; i < n; i++)
			scanf("%d", &A[i]);
		select_sort(A,n);

		for(i = 0; i < n; i++)
		{
			if(i > 0)
				printf(" ");
			printf("%d ",A[i]);
		}
		printf("\n");
	}
	return 0;
}

/*************************************************************************
    > File Name: Pro1014_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int Max(int *Arr, int n)
{
	int i,max = Arr[0], num = 0;
	for(i = 1; i < n; i++)
	{
		if(Arr[i] > max)
		{
			num = i;
			max = Arr[i];
		}
	}
	return num;
}

int Min(int *Arr, int n)
{
	int i, min = Arr[0], num = 0;
	for(i = 1; i < n; i++)
	{
		if(Arr[i] < min)
		{
			num = i;
			min = Arr[i];
		}		
	}
	return num;
}

int main(void)
{
	int n,k;
	int A[100];
	int i;
	scanf("%d %d",&n,&k);
	for(i = 0; i < n; i++)
		scanf("%d",&A[i]);

	int L[1000][2];
	int max,min,minK;
	for(i = 0; i < k; i++)
	{
		minK = i + 1;
		max = Max(A,n);
		min = Min(A,n);
		if(A[max] - A[min] < 1)
			break;
		A[max] -= 1;
		A[min] += 1;
		L[i][0] = max;
		L[i][1] = min;
	}
	int res = A[Max(A,n)] - A[Min(A,n)];
	printf("%d %d\n",res, minK);
	for(i = 0; i < minK; i++)
		printf("%d %d\n", L[i][0] + 1, L[i][1] + 1);
	return 0;
}


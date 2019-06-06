/*************************************************************************
    > File Name: Pro1008_C.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

#define _Method1

#ifdef _Method1
int main(void)
{
	int A;
	while(EOF!=scanf("%d",&A))
	{
		if(0 == A)
			break;
		int n;
		int num;
		int sum = 0;
		int flag = 0;
		for(int i = 0; i < A; i++)
		{
			scanf("%d",&num);
			n = num - flag;
			flag = num;
			if(n > 0)
				sum += n*6;
			if(n < 0)
				sum += (-n)*4;
			sum += 5;
		}
		printf("%d\n",sum);
	}
	return 0;
}
#else

int main(void)
{
	int N;
	int a[101];
	int tmp;
	int sum = 0;

	while(EOF!=scanf("%d",&N))
	{
		if(0 == N)
			break;
		for(int i = 0; i < N; i++)
			scanf("%d",&a[i]);
		sum = 6*a[0] + 5;
		for(int i = 1; i < N; i++)
		{
			tmp = a[i] - a[i-1];
			
			if(tmp>0)
			{
				sum = sum + tmp*6 + 5;
			}
			else
			{
				sum = sum - tmp*6 + 5;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
#endif


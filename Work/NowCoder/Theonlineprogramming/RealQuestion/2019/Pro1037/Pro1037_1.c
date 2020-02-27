/*************************************************************************
    > File Name: Pro1037_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int cost[10000];
int f[10000];

int main(void)
{
	int N,i,m,t,k;
	N = 0;
	while(1)
	{
		scanf("%d",&cost[N++]);
		if(getchar()!=',')
			break;
	}
	f[0] = cost[0];
	f[1] = cost[1];
	for(int i = 2; i < N; i++)
	{
		if(f[i-1] < f[i-2])
			t = f[i-1];
		else
			t = f[i-2];
		f[i] = cost[i] + t;
	}
	k = (f[N-1] < f[N-2])?f[N-1] : f[N-2];
	printf("%d",k);
	return 0;
}

/*************************************************************************
    > File Name: Pro1007-1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int *v;
long long p(int n)
{
	if(n == 0)
		return 1;
	return 2*p(n-1);
}
long long f(int i, long long w)
{
	if(w <= 0)
		return 0;
	if(i == 1)
	{
		if(w >= v[1])
			return 2;
		else
			return 1;
	}
	return f(i-1,w) + f(i-1, w-v[i]);
}
int main(void)
{
	int n,i;
	long long w,num,wigh;
	num = 0, wigh = 0;
	scanf("%d %lld",&n,&w);
	v = (int*)malloc(sizeof(int)*(n+1));
	for(i = 1; i <= n; i++)
	{
		scanf("%d",v+i);
		wigh = wigh + v[i];
	}
	if(wigh <= w)
		num = p(n);
	else
		num = f(n,w);
	printf("%lld",num);
	return 0;
}

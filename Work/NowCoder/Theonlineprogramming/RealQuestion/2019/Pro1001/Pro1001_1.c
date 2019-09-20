/*************************************************************************
    > File Name: Pro1001_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int a,b,c,i,m,n,sum;
	scanf("%d%d",&a,&b);
	m = (a-1)%3;
	c = a -1;
	if(m == 0)
		a = (c/3)*2;
	if(m == 1)
		a = (c/3)*2;
	if(m == 2)
		a = (c/3)*2+1;
	n = b%3;
	if(n == 0)
		b = (b/3)*2;
	if(n == 1)
		b = (b/3)*2;
	if(n == 2)
		b = (b/3)*2 + 1;
	printf("%d",b-a);
	return 0;
}

/*************************************************************************
    > File Name: Pro1013_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int max(int x, int y)
{
	return x>y ? x:y;
}

int main(void)
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int result = max(max(max(a+b+c, a*b*c), max(a+b*c, a*b+c)), max(a*(b+c), (a+b)*c));
	printf("%d\n",result);
	return 0;
}

/*************************************************************************
    > File Name: Pro1005.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int x,y,a,b;
	scanf("%d%d%d%d",&x,&a,&y,&b);
	printf("%.2lf",(b*y-a*x)*1.0/(1.0 *(b-a)));
	return 0;
}

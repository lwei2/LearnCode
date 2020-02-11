/*************************************************************************
    > File Name: Pro1002_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

#define fun(x) (((x)+2)/3)

int main(void)
{
	int l,r;
	while(~scanf("%d%d",&l,&r))
		printf("%d\n",r-l+1-fun(r)+fun(l-1));
	return 0;
}

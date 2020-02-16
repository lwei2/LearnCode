/*************************************************************************
    > File Name: Pro0001_2.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int n,m,k,x;
	int status = 0;
	scanf("%d %d %d",&n,&m,&k);
	for(int i = 0; i < n*m; i++)
	{
		scanf("%d",&x);
		if(x == k)
		{
			printf("Yes");
			return 0;
		}
	}
	printf("No");
	return 0;
}

/*************************************************************************
    > File Name: Pro1090.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
int main(void)
{
	int a,b;
	int i,N;
	while(scanf("%d",&N)!=EOF)
	{
		for(i = 0; i < N; i++)
		{
			if(scanf("%d %d",&a, &b)!=EOF)
				printf("%d\n",a+b);
		}
	}
	return 0;
}

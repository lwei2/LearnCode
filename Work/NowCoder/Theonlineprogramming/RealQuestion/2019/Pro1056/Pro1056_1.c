/*************************************************************************
    > File Name: Pro1056_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j,k,t;
	int a[100];
	for(j = 0; j < 2; j++)
	{
		while(scanf("%d",&a[i++]))
		{
			if(getchar() == '\n')
				break;
		}
	}
	for(j = 0; j < i; j++)
	{
		for(k = j + 1; k < i; k++)
		{
			if(a[j] > a[k])
			{
				t = a[j];
				a[j] = a[k];
				a[k] = t;
			}
		}
	}
	for(j = 0; j < i; j++)
		printf("%d ",a[j]);
	return 0;
}

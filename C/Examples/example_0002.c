/*************************************************************************
    > File Name: example_0002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j,n,m;
	int a[16] = {
		0
	};
	printf("please input the decialism number:\n");
	scanf("%d",&n);
	for(m = 0; m < 15; m++)
	{
		i = n%2;
		j = n/2;
		n = j;
		a[m] = i;
	}
	for(m = 15; m >= 0; m--)
	{
		printf("%d",a[m]);
		if(m%4 == 0)
			printf(" ");
	}
	printf("\n");
	return 0;
}

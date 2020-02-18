/*************************************************************************
    > File Name: Pro1028_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int i,j,k,x;
	int count = 0;
	scanf("%d",&x);
	if(x == 1 || x == 2 || x == 4)
		printf("-1");
	else
	{
		count += x/7;
		if(x%7 == 0)
			printf("%d",count);
		else if(x%7 == 1 || x%7 == 3 || x%7 == 5)
		{
			count++;
			printf("%d",count);
		}
		else if(x%7 == 2 || x%7 == 4 || x%7 == 6)
		{
			count+=2;
			printf("%d",count);
		}
	}
	return 0;
}

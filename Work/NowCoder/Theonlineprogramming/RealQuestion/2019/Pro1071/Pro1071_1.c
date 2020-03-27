/*************************************************************************
    > File Name: Pro1071_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int flag[10000];
	int sum = 0;
	int t = 0;
	while(~scanf("%d",&t))
	{
		flag[t]++;
		if(flag[t] == 1)
			sum += t + 1;
		else if(flag[t] > t + 1)
		{
			flag[t] = 1;
			sum += t + 1;
		}		
	}
	printf("%d\n",sum);
	return 0;
}

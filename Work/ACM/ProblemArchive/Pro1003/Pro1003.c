/*************************************************************************
    > File Name: Pro1003.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
int main(void)
{
	int t,n,sum,max,start,end,i,j;
	int temp, flag;
	scanf("%d",&t);
	for(j = 0; j < t; j++)
	{
		scanf("%d",&n);
		sum = 0;
		start = 0;
		end = 0;
		flag = 0;
		max = -1001;
		for(i = 0; i < n; i++)
		{
			scanf("%d",&temp);
			sum += temp;
			if(max < sum)
			{
				max = sum;
				start = flag;
				end = i;
			}
			if(sum < 0)
			{
				flag = i - 1;
				sum = 0;
			}
		}
		prinf("Case %d:\n%d %d %d\n",j+1, max, start + 1, end + 1);
		if(j<t-1)
			printf("\n");
	}
	return 0;

}

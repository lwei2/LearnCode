/*************************************************************************
    > File Name: Pro1087.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int d[1001],ans[1001];
	int i,j;
	int n,flag,res;
	while(~scanf("%d",&n) && n)
	{
		for(i = 0; i < n; i++)
			scanf("%d",&d[i]);
		memset(ans, 0,sizeof(ans));
		for(i = 0; i < n; i++)
		{
			flag = 0;
			int temp = -1;
			for(j = 0; j < i; j++)
			{
				if(d[i] > d[j] && temp < ans[j])
				{
					temp = ans[j];
					flag = 1;
				}
			}
			if(flag)
				ans[i] = temp + d[i];
			else
				ans[i] += d[i];
		}
		res = -1;
		for(i = 0; i < n; i++)
			if(res  < ans[i])
				res = ans[i];
		printf("%d\n",res);
	}
	return 0;
}

/*************************************************************************
    > File Name: Pro1028.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>

int main(void)
{
	int ans[121],tmp[121];
	int i,j,n,k,l;
	while(~scanf("%d",&n))
	{
		for(i = 0; i <= n;i++)
		{
			ans[i] = 1;
			tmp[i] = 0;
		}
		for(i = 2; i <= n;i++)
		{
			for(j = 0; j <= n;j++)
				for(k = 0; k+j <=n ;k+=i)
					tmp[k+j] += ans[j];
			for(j = 0; j <=n ;j++)
			{
				ans[j] = tmp[j];
				tmp[j] = 0;
			}
		}
		printf("%d\n",ans[n]);
	}
	return 0;
}

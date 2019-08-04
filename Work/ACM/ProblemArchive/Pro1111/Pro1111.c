/*************************************************************************
    > File Name: Pro1111.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

typedef __int64 LL;

LL xr, xi, br, bi, sq, ans[101];

int flag, k;
void dfs(int step, LL real, LL com)
{
	LL tx, ty;
	if(step > 100 || flag)
		return;
	if(!real && !com)
	{
		flag = 1;
		k = step;
		return;
	}
	for(int i = 0; i * i < sq; i++)
	{
		tx = (real - i)*br + com * bi;
		ty = -(real - i)*bi + com * br;
		ans[step] = i;
		if(!(tx%sq) && !(ty%sq))
			dfs(step + 1, tx/sq, ty/sq);
		if(flag)
			return;
	}
}

int main(void)
{
	int i,t;
	scanf("%d",&t);
	while(t--)
	{
		flag = 0;
		scanf("%I64d%I64d%I64d%I64d",&xr, &xi, &br, &bi);
		sq = br * br + bi * bi;
		dfs(0, xr, xi);
		if(!flag)
			printf("The code cannot be decrypted.\n");
		else
		{
			printf("%d",ans[k-1]);
			for(i = k - 2; i >= 0; i--)
				printf(",%I64d", ans[i]);
			printf("\n");
		}
	}
	return 0;
}

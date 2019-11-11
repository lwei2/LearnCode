/*************************************************************************
    > File Name: Pro1008-1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int a[1005];
int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);
	int ans = m;
	while(m--)
	{
		int x;
		scanf("%d",&x);
		a[x]++;
	}
	for(int i = 1; i <= n; i++)
		if(ans > a[i])
			ans = a[i];
	printf("%d\n",ans);
	return 0;
}

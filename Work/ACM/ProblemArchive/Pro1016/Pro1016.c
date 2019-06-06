/*************************************************************************
    > File Name: Pro1016.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int n;
int visited[21],a[21];
int prime[40] ={0,1,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0};
void dfs(int num)
{
	int i;
	if(num == n && prime[a[num-1] + a[0]])
	{
		for(i = 0; i < num - 1; i++)
			printf("%d ", a[i]);
		printf("%d\n",a[num-1]);
	}
	else
	{
		for(i = 2; i <= n; i++)
		{
			if(visited[i] == 0)
			{
				if(prime[i+a[num-1]])
				{
					visited[i] = -1;
					a[num++] = i;
					dfs(num);
					visited[i] = 0;
					num--;
				}
			}
		}
	}
}
int main(void)
{
	int num = 0;
	while(scanf("%d",&n)!=EOF)
	{
		num++;
		printf("Case %d:\n",num);
		memset(visited,0,sizeof(visited));
		a[0] = 1;
		dfs(1);
		printf("\n");
	}
	return 0;
}

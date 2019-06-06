/*************************************************************************
    > File Name: Pro1010_C++.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;


char graph[10][10];
int sx,sy,dx,dy,n,m,k;
bool flag;
bool visit[10][10];
int turn[4][2] = {1,0,-1,0,0,1,0,-1};
void dfs(int x,int y,int count)
{
	int mx,my;
	if(x==dx&&y==dy&&count==k)
	{
		flag=1;
		return ;
	}
	if(count>=k)return ;
	if(graph[x][y]!='X')
	{
		for(int i=0;i<4;i++)
		{
			mx = x+turn[i][0];
			my = y+turn[i][1];
			if(graph[mx][my]!='X'&&mx>=1&&mx<=n&&my>=1&&my<=m&&!visit[mx][my])
			{
				visit[mx][my] = 1;
				dfs(mx,my,count+1);
				visit[mx][my] = 0;
				if(flag)return ;
			}
		}
	}
}
int main()
{
	int count;
	while(cin>>n>>m>>k)
	{
		if(n==0&&m==0&&k==0)
			break;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>graph[i][j];
				if(graph[i][j]=='S')
				{
					sx = i;
					sy = j;
				}
				if(graph[i][j]=='D')
				{
					dx = i;
					dy = j;
				}
			}
		}
		if(abs(sx-dx)+abs(sy-dy)>k||(sx+sy+dx+dy+k)%2==1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		memset(visit,0,sizeof(visit));
		count=0;
		flag=0;
		visit[sx][sy] = 1;
		dfs(sx,sy,count);
		if(flag)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}


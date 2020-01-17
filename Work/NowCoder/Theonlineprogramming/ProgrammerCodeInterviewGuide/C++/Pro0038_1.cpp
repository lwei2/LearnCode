/*************************************************************************
    > File Name: Pro0038_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <queue>
using namespace std;

const int maxn = 1005;
char mp[maxn][maxn]{0};
bool vis[maxn][maxn]{0};
const int dx[]{1,-1,0,0},dy[]{0,0,1,-1};
struct node
{
	int x,y,w;
};
int main(void)
{
	int n,m;
	cin.sync_with_stdio(false);
	cin>>n>>m;
	for(int i = 1; i <= n; ++i)
		for(int j = 1; j <= m; ++j)
			cin>>mp[i][j];

	queue<node> q;
	q.push({1,1,0});
	while(!q.empty())
	{
		node now = q.front();
		q.pop();
		if(now.x == n && now.y == m)
		{
			printf("%d\n", now.w+1);
			return 0;
		}
		for(int i = 0; i < 4; ++i)
		{
			int tx = now.x + dx[i],ty = now.y + dy[i];
			if(!vis[tx][ty] && mp[tx][ty] != '0' &&	tx >= 1 && tx <= n && ty >= 1 && ty <= m)
			{
				vis[tx][ty] = 1;
				q.push({tx,ty,now.w + 1});
			}
		}
	}
	puts("-1");
	return 0;
}

/*************************************************************************
    > File Name: Pro1067.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstring>
#include <string>
#include <map>
#include <cstdio>
#include <cmath>
#include <queue>
#include <algorithm>

using namespace std;

const int INF = 0x3f3f3f3f;
const int Maxn = 4e5+10;

struct Node 
{
	char stat[80];
	int step;
};
char Ed[80];
void bfs(char *ss)
{
	map<string, int>vis;
	queue<Node>qu;
	Node tmp;
	memcpy(tmp.stat, ss, sizeof(tmp.stat));
	tmp.step = 0;
	qu.push(tmp);
	vis[ss] = 1;
	while(!qu.empty())
	{
		tmp = qu.front();
		qu.pop();
		if(!strcmp(tmp.stat, Ed))
		{
			printf("%d\n",tmp.step);
			return;
		}
		int len = strlen(tmp.stat);
		for(int i = 0; i < len; i += 2)
		{
			if(tmp.stat[i] == '0' && (tmp.stat[i - 1] != '7' || tmp.stat[i-1] !='0'))
			{
				Node now = tmp;
				now.step++;
				for(int j = 0; j < len; j+=2)
				{
					if(now.stat[j] == tmp.stat[i-2] && now.stat[j+1] == tmp.stat[i-1] + 1)
					{
						now.stat[i] = now.stat[j];
						now.stat[i+1] = now.stat[j+1];
						now.stat[j] = now.stat[j+1] = '0';
						if(!vis[now.stat])
						{
							vis[now.stat] = 1;
							qu.push(now);
						}
						break;
					}
				}
			}
		}
	}
	printf("-1\n");
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char str[80];
		int tmp,p = 0;
		for(int i = 1; i <= 4; ++i)
		{
			str[p++] = '0' + i;
			str[p++] = '1';
			for(int j = 2; j <= 8; ++j)
			{
				scanf("%d",&tmp);
				if(tmp == 11 || tmp == 21 || tmp == 31 || tmp == 41)
				{
					str[p++] = '0'; 
					str[p++] = '0';
				}
				else
				{
					str[p++] = '0' + (tmp/10);
					str[p++] = '0' + (tmp%10);
				}
			}
		}
		str[p] = '\0';
		p = 0;
		for(int i = 1; i <= 4; ++i)
		{
			for(int j = 1; j <= 7; ++j)
				Ed[p++] = i+'0',Ed[p++] = j+'0';
			Ed[p++] = '0';
			Ed[p++] = '0';
		}
		Ed[p] = '\0';
		bfs(str);
	}
	return 0;
}

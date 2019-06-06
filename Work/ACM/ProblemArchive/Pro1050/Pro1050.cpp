/*************************************************************************
    > File Name: Pro1050.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define SIZE 404

typedef struct item
{
	int begin;
	int end;
}item;

item room[SIZE];
bool visit[SIZE];
int n;

bool cmp(const item& a, const item& b)
{
	return a.begin < b.begin;
}

void Traverse(int cnt, int sum)
{
	if(sum == n)
	{
		printf("%d\n",cnt*10);
		return;
	}
	int tmp = 0, count = 0;
	for(int i = 0; i < n; i++)
	{
		if(!visit[i] && tmp < room[i].begin)
		{
			count++;
			tmp = room[i].end;
			visit[i] = true;
		}
	}
	Traverse(cnt+1, sum+count);
}

int main(void)
{
	int T, left, right;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d", &n);
		for(int i = 0; i < n; ++i)
		{
			scanf("%d", &left);
			room[i].begin = left = left + (left % 2);
			scanf("%d", &right);
			room[i].end = right = right + (right % 2);
			if(left > right)
			{
				room[i].begin = right;
				room[i].end = left;
			}
		}
		memset(visit, false, sizeof(visit));
		sort(room, room + n, cmp);
		Traverse(0, 0);
	}
	return 0;
}

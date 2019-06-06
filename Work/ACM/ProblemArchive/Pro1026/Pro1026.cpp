/*************************************************************************
    > File Name: Pro1026.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

struct Queue {
	int x;
	int y;
	int father;
	int step;
	int monster;
}queue[11000];

void bfs(void);
bool cmpl(Queue a, Queue b);
void output(int k);

int n, m;
int flag, Case;
char maze[101][101];
bool visit[101][101];
int head, tail;

int main(void)
{
	while (cin >> n >> m)//行列数
	{
		Case = 1;flag = 0;
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<m; j++)
				cin >> maze[i][j];
		}

		bfs();

		if (flag)
		{
			printf("It takes %d seconds to reach the target position, let me show you the way.\n", queue[head].step);
			output(head);
		}
		else
			cout << "God please help our poor hero." << endl;
		cout << "FINISH" << endl;
		/* 输出队列状态。。
		for (int i = 0; i < tail; i++)
		{
			printf("i=%d (%d,%d), step=%d, father=%d, monster=%d \n",i,queue[i].x, queue[i].y, queue[i].step, queue[i].father, queue[i].monster );
		}*/
	}
	return 0;
}

void bfs(void)
{
	Queue temp;
	int next[4][2] = { { 1,0 } ,{ -1,0 } ,{ 0,1 } ,{ 0,-1 } };

	head = 0;
	tail = 1;//Error First
	memset(visit, 0, sizeof(visit));//清空visit路径记录数组
	queue[head].x = queue[head].y = queue[head].step = queue[head].monster = 0; queue[head].father = -1;//初始化队列头
	while (head != tail)//判断是否终止队列
	{
		sort(queue + head, queue + tail, cmpl);//sort使时间优先
		if (queue[head].x == n - 1 && queue[head].y == m - 1) { flag = 1; return; }
		for (int i = 0; i < 4; i++)
		{
			//temp为这一步的中间量
			temp.x = queue[head].x + next[i][0], temp.y = queue[head].y + next[i][1]; temp.monster = 0;//从上一步到这一步走的方向

			if (temp.x < 0 || temp.y < 0 || temp.x >= n || temp.y >= m) continue;//出了迷宫数组边界
			if (maze[temp.x][temp.y] == 'X' || visit[temp.x][temp.y]==1) continue;//墙或者走过的路
			if (maze[temp.x][temp.y] >= '0' && maze[temp.x][temp.y] <= '9') //判断是否当前有怪物
			{
				temp.monster = maze[temp.x][temp.y] - '0'; //怪物血量由char类型转化为int
				temp.step = queue[head].step + 1 + temp.monster; //打怪需要的时间统计到总时间里
			}
			else
				temp.step = queue[head].step + 1;//总时间++
			temp.father = head;//存储路径
			visit[temp.x][temp.y] = 1;//标记当前路径为‘走过’状态
			queue[tail++] = temp;//把中间量赋进队列数组
		}
		head++;//Error Second
	}
}

bool cmpl(Queue a, Queue b)//时间优先
{
	return a.step < b.step;
}

void output(int k)//从迷宫尾部递归到迷宫头部，然后从头部输出，逐层回到尾部
{
	if (k == -1) return;
	output(queue[k].father);
	if (queue[k].father != -1)
	{
		printf("%ds:(%d,%d)->(%d,%d)\n", Case++, queue[queue[k].father].x, queue[queue[k].father].y, queue[k].x, queue[k].y);
		for (int i = 0; i < queue[k].monster; i++)
			printf("%ds:FIGHT AT (%d,%d)\n", Case++, queue[k].x, queue[k].y);
	}
}


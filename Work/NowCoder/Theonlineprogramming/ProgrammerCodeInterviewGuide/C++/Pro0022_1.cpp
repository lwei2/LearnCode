/*************************************************************************
    > File Name: Pro0022_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
题目描述
汉诺塔问题比较经典，这里修改一下游戏规则：现在限制不能从最左侧的塔直接移动到最右侧，也不能从最右侧直接移动到最左侧，而是必须经过中间。求当塔有n层的时候，打印最优移动过程和最优移动总步数。
输入描述:
输入一个数n，表示塔层数
输出描述:
按样例格式输出最优移动过程和最优移动总步数
示例1
输入
复制
2
输出
复制
Move 1 from left to mid
Move 1 from mid to right
Move 2 from left to mid
Move 1 from right to mid
Move 1 from mid to left
Move 2 from mid to right
Move 1 from left to mid
Move 1 from mid to right
It will move 8 steps.

当塔数为两层时，最上层的塔记为1，最下层的塔记为2

备注:
1\le n \le 121≤n≤12

 ************************************************************************/


#include <iostream>

using namespace std;

int n,steps;

void left_to_mid(int x)
{
	++steps;
	printf("Move %d from left to mid\n",x);
}

void right_to_mid(int x)
{
	++steps;
	printf("Move %d from right to mid\n",x);	
}

void mid_to_left(int x)
{
	++steps;
	printf("Move %d from mid to left\n",x);
}

void mid_to_right(int x)
{
	++steps;
	printf("Move %d from mid to right\n",x);
}

void hanoiProblem1(int n, int type)
{
	if(!n)
		return;
	hanoiProblem1(n-1,type);
	type ? left_to_mid(n):right_to_mid(n);
	hanoiProblem1(n-1, type^1);
	type?mid_to_right(n):mid_to_left(n);
	hanoiProblem1(n-1,type);
}

int main(void)
{
	scanf("%d",&n);
	if(1 <= n && n <= 12)
	{
		hanoiProblem1(n,1);
		printf("It will move %d steps.",steps);
	}
	else
		printf("error\n");
	return 0;
}

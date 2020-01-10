/*************************************************************************
    > File Name: sort_0009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct Node
{
	int x,y;
}p[1001];
int n;

bool cmp(Node a, Node b)
{
	if(a.x != b.x)
		return a.x < b.x;
	return a.y < b.y;
}
int main(void)
{
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
		scanf("%d%d",&p[i].x, &p[i].y);
	sort(p+1, p+n+1, cmp);
	for(int i = 1; i <= n; i++)
		scanf("%d%d",p[i].x,p[i].y);
	printf("\n");
	return 0;
}

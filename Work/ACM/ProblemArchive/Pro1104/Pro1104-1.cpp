/*************************************************************************
    > File Name: Pro1104-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <set>
#include <functional>
#include <numeric>
#include <sstream>
#include <stack>
#include <map>
#include <queue>

#pragma comment(linker, "/STACK:102400000,102400000")
#define CL(arr, val) memset(arr, val, sizeof(arr))

#define ll long long 
#define inf 0x7f7f7f7f
#define lc l,m,rt<<1
#define rc m + 1, r,rt<<1|1
#define pi acos(-1.0)

#define L(x) (x) << 1
#define R(x) (x) << 1 | 1
#define MID(l, r) (l + r) >> 1
#define Min(x,y) (x) < (y) ? (x) : (y)
#define Max(x,y) (x) < (y) ? (y) : (x)
#define E(x)	(1 << (x))
#define iabs(x) (x) < 0 ? -(x):(x)
#define OUT(x) printf("%I64d\n",x)
#define lowbit(x) (x)&(-x)
#define Read() freopen("a.txt", "r", stdin)
#define Write() freopen("b.txt", "w".stdout);
#define maxn	1000000000
#define N 2510
#define mod 1000000000

using namespace std;

struct point
{
	int num;
	string a;
};

int n,m,k,mk;
int vis[1000005];

void bfs()
{
	memset(vis, 0, sizeof(vis));
	point s;
	s.num = n, s.a = "";
	queue<point> que;
	que.push(s);
	vis[(n%k+k)%k] = 1;
	while(!que.empty())
	{
		point e = que.front();
		que.pop();
		if((e.num%k + k)%k == ((n+1)%k + k)%k)
		{
			cout<<e.a.length()<<endl;
			cout<<e.a<<endl;
			return ;
		}
		s.num = (e.num + m)%mk;
		s.a = e.a + '+';
		if(!vis[(s.num%k + k)%k])
		{
			que.push(s);
			vis[(s.num%k + k)%k] = 1;
		}
		s.num = (e.num - m)%mk;
		s.a = e.a + '-';
		if(!vis[(s.num%k + k)%k])
		{
			que.push(s);
			vis[(s.num%k + k)%k] = 1;
		}
		s.num = (e.num*m)%mk;
		s.a = e.a + '*';
		if(!vis[(s.num%k + k)%k])
		{
			que.push(s);
			vis[(s.num%k + k)%k] = 1;
		}
		s.num = (e.num%m + m)%m%mk;
		s.a = e.a + '%';
		if(!vis[(s.num%k + k)%k])
		{
			que.push(s);
			vis[(s.num%k + k)%k] = 1;
		}
	}
	puts("0");
}

int main(void)
{
	while(~scanf("%d%d%d",&n,&k,&m))
	{
		if(n == 0 && m == 0 && k == 0)
			break;
		mk = m*k;
		bfs();
	}
	return 0;
}

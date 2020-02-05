/*************************************************************************
    > File Name: Pro0176_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;

const int N=5e5+7;

int read()
{
	int x = 0, f = 1;
	char s = getchar();
	for(;s > '9' || s < '0'; s = getchar())
		if(s == '-')
			f = -1;
	for(; s >= '0' && s <= '9'; s = getchar())
		x = x * 10 + s - '0';
	return x*f;
}

int n,m,S,tong[N],f[N];
vector<int> a,b;
void check(int x)
{
	if(x < 1 || x > n)
		puts("error"),exit(0);
}

int main(void)
{
	n = read(), m = read();
	if(n < 1 || n > 500000)
		return puts("error"), 0;
	for(int i =1; i <= n; ++i)
	{
		int u = read(), x = read(), y = read();
		check(u);
		if(x && x == y)
			return puts("error"),0;
		if(x)
			f[x] = u;
		if(y)
			f[y] = u;
	}
	int A = read(), B = read();
	if(A == B)
		return puts("error"),0;
	check(A),check(B);
	while(A!=S)
		a.push_back(A),A=f[A];
	while(B!=S)
		b.push_back(B),B=f[B];
	a.push_back(S),b.push_back(S);
	for(auto v : a)
		tong[v] = 1;
	for(auto v : b)
	{
		if(tong[v])
		{
			printf("%d\n",v);
			break;
		}
	}
	return 0;
}

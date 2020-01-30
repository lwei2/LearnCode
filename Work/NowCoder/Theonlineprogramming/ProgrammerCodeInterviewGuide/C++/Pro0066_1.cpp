/*************************************************************************
    > File Name: Pro0066_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

#define _for(i,a,b) for(int i(a),I(b); i < I; ++i)
#define isdigit(c) (unsigned((c) - '0') < 10)
#define gc() (p1 == p2 && (p1 = bf, p2 = bf + fread(bf, 1, 1 << 21, stdin), p1 == p2)?EOF : *p1++)

char bf[1 << 21], *p1 = bf, *p2 = bf;

template<class T> void read(T & x)
{
	char c(gc());
	T t(0);
	for(; c != EOF && !isdigit(c); c = gc())
		;
	for(; isdigit(c); c = gc())
		t = 10*t + (c & 15);
	x = t;
}

const int N = 1000005;
int par[N],rk[N];
void init(int n)
{
	_for(i,0,n)
		par[i] = i;
}
int find(int x)
{
	return x == par[x] ? x : (par[x] = find(par[x]));
}

void unite(int x, int y)
{
	if((x = find(x)) == (y = find(y)))
		return;
	if(rk[x] < rk[y])
		par[x] = y;
	else
	{
		par[y] = x;
		if(rk[x] == rk[y])
			rk[x]++;
	}
}


int main(void)
{
	int n,m,op,x,y;
	read(n),read(m);
	for(init(n); m-->0;)
	{
		read(op),read(x),read(y);
		--x,--y;
		if(op == 1)
			puts(find(x) == find(y) ? "Yes" : "No");
		else
			unite(x,y);
	}
	return 0;
}



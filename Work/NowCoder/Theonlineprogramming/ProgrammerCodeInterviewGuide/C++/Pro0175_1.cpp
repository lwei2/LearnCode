/*************************************************************************
    > File Name: Pro0175_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

const int N = 500005;

struct node
{
	unsigned int par, lson, rson;
}ns[N];

unsigned int n, root, nd;

unsigned int min(unsigned int x)
{
	for(; ns[x].lson; x = ns[x].lson);
	return x;
}

unsigned int solve()
{
	if(ns[nd].rson)
		return min(ns[nd].rson);
	while(ns[nd].par && ns[ns[nd].par].lson != nd)
		nd = ns[nd].par;
	return ns[nd].par;
}

char bf[1<<24], *p1 = bf, *p2 = bf;
#define gc() (p1 == p2 && (p1 = bf, p2 = bf + fread(bf, 1 , 1<<24, stdin), p1 == p2) ? EOF : *p1++)
template <class T>
void read(T &x)
{
	char c = gc();
	T t = 0;
	for(; c != EOF && !isdigit(c); c = gc())
		;
	for(; isdigit(c); c = gc())
		t = 10*t + (c&15);
	x = t;
}

int main(void)
{
	read(n), read(root);
	for(unsigned int par, lson, rson, i(0); i < n; ++i)
	{
		read(par),read(lson), read(rson);
		ns[par].lson = lson, ns[par].rson = rson;
		ns[lson].par = ns[rson].par = par;
	}
	read(nd);
	printf("%u\n",solve());
	return 0;
}

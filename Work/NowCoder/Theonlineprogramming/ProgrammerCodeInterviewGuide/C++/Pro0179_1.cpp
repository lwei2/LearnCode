/*************************************************************************
    > File Name: Pro0179_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;
const int N = 500005;
struct node
{
	int ls, rs;
}ns[N];

pii dfs(int root)
{
	if(0 == root)
		return pii(-1,0);
	pii lAns(dfs(ns[root].ls)), rAns(dfs(ns[root].rs));
	return pii(max(lAns.first, rAns.first)+1, max(rAns.second, max(lAns.first + rAns.first + 2, lAns.second)));
}

#define gc() (p1 == p2 && (p1 = bf, p2 = bf + fread(bf, 1, 1 << 24, stdin), p1 == p2) ? EOF : *p1++)
char bf[1 << 24], *p1(bf), *p2(bf);
template<class T>
void read(T &x)
{
	char c(gc());
	T t(0);
	for(; c != EOF && !isdigit(c); c = gc());
	for(; isdigit(c); c = gc())
		t = 10*t + (c & 15);
	x = t;
}

int main(void)
{
	int n,root,par,ls,rs;
	for(read(n), read(root); n--;)
	{
		read(par),read(ls),read(rs);
		ns[par].ls = ls, ns[par].rs = rs;
	}
	printf("%d\n",dfs(root).second+ 1);
	return 0;
}

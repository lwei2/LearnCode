/*************************************************************************
    > File Name: Pro0141_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;


const int maxn = 1e5 + 7;
const int sigma = 2;
const int maxnode = maxn *  35 + 7;
int n,m;

struct Trie
{
	int ch[maxnode][sigma];
	int value[maxnode];
	int sz = 1;
	void insert(int *a, int len, int v)
	{
		int u = 0;
		for(int i = len; i >= 0; --i)
		{
			int c = a[i];
			if(!ch[u][c])
				ch[u][c] = sz++;
			u = ch[u][c];
		}
		value[u] = v;
	}

	int query(int *a, int len)
	{
		int u = 0;
		for(int i = len; i >= 0; --i)
		{
			int c = i == len ? a[i] : a[i]^1;
			if(!ch[u][c])
				c ^= 1;
			if(!ch[u][c])
				return value[u];
			u = ch[u][c];
		}
		return value[u];
	}
};

Trie trie;
int a[35];


int main(void)
{
	int ans = 0, sum = 0;
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	{
		int x;
		scanf("%d",&x);
		sum ^= x;
		for(int j = 0; j < 32; ++j)
			a[j] = sum>>j&1;
		ans = max(ans, trie.query(a,31)^sum);
		trie.insert(a,31, sum);
	}
	printf("%d\n", ans);
	return 0;
}

/*************************************************************************
    > File Name: Pro0015_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;


inline int read()
{
	int ans = 0, flag = 0;
	char ch = getchar();
	while(ch < '0' || ch > '9')
	{
		flag |= ch == '-';
		ch = getchar();
	}
	while('0' <= ch && ch <= '9')
	{
		ans = (ans << 1) + (ans << 3) + (ch^48);
		ch = getchar();
	}
	return flag ? -ans : ans;
}
int n,w, a[1000005],q[1000005];

int main(void)
{
	n = read();
	w = read();
	for(int i = 1; i <= n; ++i)
		a[i] = read();
	int head = 1, tail = 1;
	q[head] = 1;
	for(int i = 2; i <= w; ++i)
	{
		while(a[q[tail]] < a[i] && head <= tail)
			tail--;
		q[++tail] = i;
		while(q[head]+w-1 < i && head <= tail)
			head++;
	}
	for(int i = w + 1; i <= n; ++i)
	{
		printf("%d ",a[q[head]]);
		while(a[q[tail]] < a[i] && head <= tail)
			tail--;
		q[++tail] = i;
		while(q[head]+w-1 < i && head <= tail)
			head++;
	}
	return printf("%d ",a[q[head]]),0;
}

/*************************************************************************
    > File Name: Pro1051_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

struct prince
{
	int left,right;
}a[10000];

int n;
int result;
int cmp(const void *a, const void *b)
{
	return (*(prince*)a).right - (*(prince*)b).right;
}

int work()
{
	qsort(a+1, n, sizeof(a[0]),cmp);
	int i;
	int a1, a2;
	a1 = a[1].right -1;
	a2 = a[1].right;
	result = 2;
	for(i = 2; i <= n; i++)
	{
		if(a[i].left <= a1 && a[i].right >= a2)
			continue;
		if(a[i].left > a2)
		{
			a1 = a[i].right - 1;
			a2 = a[i].right;
			result = result + 2;
		}
		if(a[i].left > a1 && a[i].right > a2 && a[i].left <= a2)
		{
			a1 = a2;
			a2 = a[i].right;
			result++;
		}
	}
	return result;
}

int main(void)
{
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
		scanf("%d %d",&a[i].left, &a[i].right);
	printf("%d\n",work());
	return 0;
}

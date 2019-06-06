/*************************************************************************
    > File Name: Pro1031.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

class data
{
	public:
		double num;
		int c;
};

data b[500];
double a[500][500];

int cmp1(const data a, const data b)
{
	return a.num > b.num;
}

int cmp2(const int a, const char b)
{
	return a > b;
}

int main(void)
{
	int n,m,k;
	int i,j;
	int ans[1000];
	while(scanf("%d%d%d",&n,&m,&k)!=EOF)
	{
		for(i = 0; i < n; i++)
			for(j = 0; j < m; j++)
				scanf("%lf",&a[i][j]);
		for(i = 0; i < m; i++)
		{
			b[i].num = 0.0;
			b[i].c = i + 1;
			for(j = 0; j < n; j++)
			{
				b[i].num += a[j][i];
			}
		}
		sort(b,b+m,cmp1);
		for(i = 0; i < k; i++)
			ans[i] = b[i].c;
		sort(ans,ans+k,cmp2);
		for(i = 0; i < k; i++)
			i == k - 1 ? cout<<ans[i]<<endl:cout<<ans[i]<<' ';
	}
	return 0;
}

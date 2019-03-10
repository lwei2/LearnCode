/*************************************************************************
    > File Name: A.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<iomanip>
#include<cstring>

using namespace std;

int n,m;
int gun[1009][1009];
int k;
double b[1009];

int main(void)
{
	while(cin>>n>>m)
	{
		memset(b,0.0,sizeof(b));
		for(int i = 1; i <= n;++i)
		{
			cin>>gun[i][1];
			cin>>gun[i][2];
			for(int j = 3; j <= gun[i][2]+2; ++j)
				cin>>gun[i][j];
		}
		int a;
		double c;
		for(int i = 1; i <= m; ++i)
		{
			cin>>a>>c;
			b[a] = max(b[a],c);
		}
		double now = 0.0;
		double ans = 0.0;
		for(int i = 1; i <= n; ++i)
		{
			now = 1.0;
			for(int j = 3; j <= gun[i][2]+2; ++j)
				now += b[gun[i][j]];
			ans = max(ans,now*gun[i][1]);
		}
		printf("%.4f\n",ans);
	}
	return 0;
}

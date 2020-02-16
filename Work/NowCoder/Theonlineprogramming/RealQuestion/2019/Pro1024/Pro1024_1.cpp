/*************************************************************************
    > File Name: Pro1024_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(void)
{
	int N,P,H,W = 0;
	cin>>N>>P>>H>>W;
	int a[N];
	for(int i = 0; i < N; i++)
		cin>>a[i];
	int l = 0, r = min(W,H), m;
	while(l < r)
	{
		m = (l + r)/2 + 1;
		int col = 0, f = W/m;
		for(int i = 0; i < N; i++)
		{
			col += a[i]/f;
			if(a[i]%f)
				col++;
		}
		int page = col/(H/m);
		if(col%(H/m))
			page++;
		if(page > P)
			r = m - 1;
		else
			l = m;
	}
	cout<<l<<endl;
	return 0;
}

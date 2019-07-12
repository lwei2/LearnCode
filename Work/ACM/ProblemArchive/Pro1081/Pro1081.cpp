/*************************************************************************
    > File Name: Pro1081.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int GetMaxNum(int a[], int n)
{
	int i,sum = 0;
	int maxsum = 0;
	maxsum |= 1<<31;
	for(i = 1; i <= n; i++)
	{
		sum += a[i];
		if(sum < a[i])
			sum = a[i];
		if(maxsum < sum)
			maxsum = sum;
	}
	return maxsum;
}

int main(void)
{
	int i,j,k,a,n;
	int s[102][102],t[102];
	int res,maxres;
	while(cin>>n)
	{
		for(i = 0; i <= n; i++)
		{
			s[i][0] = s[0][i] = 0;
		}
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)
			{
				cin>>a;
				s[i][j] = s[i-1][j] + a;
			}
		maxres = 0;
		maxres |= 1<<31;
		for(i = 0; i < n; i++)
			for(j = i+1; j <= n; j++)
			{
				for(k = 1; k <= n; k++)
					t[k] = s[j][k] - s[i][k];
				res = GetMaxNum(t,n);
				if(maxres < res)
					maxres = res;
			}
		cout<<maxres<<endl;
	}
	return 0;
}

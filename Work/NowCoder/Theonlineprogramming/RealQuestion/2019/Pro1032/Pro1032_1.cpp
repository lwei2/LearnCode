/*************************************************************************
    > File Name: Pro1032_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main(void)
{
	int n = 0;
	int in[10000];
	bool isAll_ = true;
	do{
		scanf("%d",&in[n++]);
		if(in[n-1] > 0)
			isAll_ = false;
	}while(getchar() != '\n');
	if(isAll_)
		printf("0\n");
	else
	{
		int dp;
		dp = in[0] > 0 ? in[0] : 0;
		int maxv = dp;
		for(int i = 2; i <= n; i++)
		{
			if(dp > 0)
				dp += in[i-1];
			else
				dp = in[i-1];
			if(maxv < dp)
				maxv = dp;
		}
		printf("%d\n",maxv);
	}
	return 0;
}

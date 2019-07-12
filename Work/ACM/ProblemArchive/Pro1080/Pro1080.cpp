/*************************************************************************
    > File Name: Pro1080.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int link[10][10] = {{5,-1,-2,-1,-3},{-1,5,-3,-2,-4},{-2,-3,5,-2,-2},{-1,-2,-2,5,-1},{-3,-4,-2,-1,-0}};
int dp[105][105];

int change(char a)
{
	if(a == 'A')
		return 0;
	if(a == 'C')
		return 1;
	if(a == 'G')
		return 2;
	if(a == 'T')
		return 3;
	if(a == '-')
		return 4;
}
int main(void)
{	
	int o,len1,len2;
	char s1[105],s2[105];
	while(~scanf("%d",&o))
	{
		while(o--)
		{
			scanf(" %d %s",&len1,s1+1);
			scanf(" %d %s",&len2,s2+1);
			dp[0][0] = 0;
			for(int i = 1; i <= len1; i++)
			{
				dp[i][0] = dp[i-1][0] + link[change(s1[i])][4];
			}
			for(int i = 1; i <= len2; i++)
			{
				dp[0][i] = dp[0][i-1] + link[change(s2[i])][4];
			}
			for(int i = 1; i <= len1; i++)
				for(int j =1; j <= len2; j++)
				{
					dp[i][j] = max(dp[i-1][j-1] + link[change(s1[i])][change(s2[j])], max(dp[i-1][j] + link[change(s1[i])][4],	dp[i][j-1] + link[4][change(s2[j])]));
				}
			printf("%d\n",dp[len1][len2]);
		}
	}
	return 0;
}

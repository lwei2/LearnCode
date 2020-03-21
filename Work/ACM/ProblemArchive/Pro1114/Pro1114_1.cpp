/*************************************************************************
    > File Name: Pro1114_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <math.h>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
const int inf=0x3f3f3f;
int dp[10001];//dp[i]表示重量为i时，钱的最小值（初始化无限大）
int a[550];
int w[550];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int e,f;
        scanf("%d%d",&e,&f);
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
          scanf("%d%d",&a[i],&w[i]);
        int v=f-e;
        for(int i=1; i<=v; i++)
            dp[i]=inf;
        dp[0]=0;
        for(int i=0; i<n; i++)
        {
            for(int j=w[i]; j<=v; j++)
                dp[j]=min(dp[j],dp[j-w[i]]+a[i]);
        }
        if(dp[v]<inf)printf("The minimum amount of money in the piggy-bank is %d.\n",dp[v]);
        else printf("This is impossible.\n");
    }
    return 0;
}


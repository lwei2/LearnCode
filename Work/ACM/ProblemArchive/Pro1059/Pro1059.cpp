/*************************************************************************
    > File Name: Pro1059.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>

using namespace std;

int c1[150000], c2[150000];

int main(void)
{
	int i,j,k;
	int n,m = 1;
	int a[7],sum;
	while(scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])
			&& (a[0]+a[1]+a[2]+a[3]+a[4]+a[5]))
	{
		memset(c1, 0, sizeof(c1));
		memset(c2, 0, sizeof(c2));
		sum = a[0]%60 + 2*a[1]%60+3*a[2]%60+4*a[3]%60+5*a[4]%60+6*a[5]%60;
		for(i = 0; i <= a[0];i++)
		{
			c1[i] = 1;
		}
			for(i = 1; i < 6; i++)
			{
				for(j = 0; j <= sum; j++)
					for(k = 0; j+k <= sum && k <= a[i]*(i+1); k+=(i+1))
					{
						c2[k+j] += c1[j];
					}
				for(j = 0; j <= sum; j++)
				{
					c1[j] = c2[j];
					c2[j] = 0;
				}
			}
			if(sum%2 == 0 && c1[sum/2])
				printf("Collection #%d:\nCan be divided.\n",m++);
			else
				printf("Collection #%d:\nCan't be divided.\n",m++);
			printf("\n");
	}
	return 0;
}

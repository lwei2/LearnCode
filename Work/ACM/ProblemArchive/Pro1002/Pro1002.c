/*************************************************************************
    > File Name: Pro1002.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :Sum Problem
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int main(void)
{
	char a1[1001] = {'\0'}, b1[1001] = {'\0'};
	int a2[1001],b2[1001],sum[1001];
	int T;
	int n;
	int j,k,m,r;
	scanf("%d",&T);
	int i = 0;
//	int i = 1;
	while(i++ < T)
	{
	//	for(j = 0; j < 1001; j++)
	//		sum[j] = 0;
	//	for(j = 0; j < 1001; j++)
	//		a2[j] = 0;
	//	for(j = 0; j < 1001; j++)
	//		b2[j] = 0;
		memset(sum,0,sizeof(sum));
		memset(a2,0,sizeof(a2));
		memset(b2,0,sizeof(b2));
		scanf("%s",&a1);
		scanf("%s",&b1);
		r = 1;
		for(j = strlen(a1) - 1; j >= 0; j--)
		{
			a2[r] = a1[j] - 48;
			r++;
		}
		r = 1;
		for(j = strlen(b1) - 1; j >= 0; j--)
		{
			b2[r] = b1[j] - 48;
			r++;
		}
		if(strlen(a1) > strlen(b1))
			k = strlen(a1);
		else
			k = strlen(b1);
		for(j = 1; j <= k; j++)
		{
			sum[j] = sum[j] + a2[j] + b2[j];
			if(sum[j] >= 10)
			{
				sum[j] = sum[j] - 10;
				m = j + 1;
				sum[m]++;
			}
		}
		printf("Case %d:\n",i);
		for(j = strlen(a1); j > 0; j--)
			printf("%d",a2[j]);
		printf(" + ");
		for(j = strlen(b1); j > 0; j--)
			printf("%d",b2[j]);
		printf(" = ");
		if(sum[k+1])
			k++;
		for(j = k; j > 0; j--)
			printf("%d",sum[j]);
		printf("\n");
		if(i<n)
			printf("\n");
		//i++;
	}
	
	return 0;
}

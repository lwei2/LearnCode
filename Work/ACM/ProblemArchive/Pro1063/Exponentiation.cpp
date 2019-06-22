/*************************************************************************
    > File Name: Exponentiation.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int a[707],b[707],c[707];
char s[10];
void fun(int a[])
{
	int i,j;
	memset(c,0,sizeof(c));
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 200; j++)
			c[i+j] += a[i]*b[j];
	}
	for(i = 0; i < 200; i++)
	{
		if(c[i] >= 10)
			c[i+1] += c[i]/10;
		c[i]%=10;
	}
	for(i = 0; i < 300; i++)
	{
		b[i] = c[i];
	}
}

int main(void)
{
	int i,j,cnt,p1,p2,n;
	while(~scanf("%s%d",s,&n))
	{
		int l = strlen(s);
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		cnt = 0;
		for(i = l-1;i >=0; i--)
			if(s[i] == '.')
				cnt = l-1-i;
		p1=0;
		for(i = l-1;i >= 0; i--)
			if(s[i]!='0')
				break;
		if(s[i] == '.')
			p1=1;
		for(i=l-1;i>=0;i--)
		{
			if(s[i]=='.')
				break;
		}
		if(i==-1)
			p1=1;
		b[0]=1;
		for(j = 0,i=l-1; i >= 0; i--)
			if(s[i]>='0' && s[i] <= '9')
				a[j++] = s[i] - '0';
		for(i = 0; i < n; i++)
			fun(a);
		for(i = 200; i >= cnt*n; i--)
			if(b[i])
				break;
		for(;i>=cnt*n; i--)
			printf("%d",b[i]);
		if(p1==0)
			printf(".");
		for(;i>=0;i--)
		{
			p2=0;
			for(j = i; j >= 0; j--)
			{
				if(b[j])
				{
					p2=1;
					break;
				}
			}
			if(p2)
				printf("%d",b[i]);
		}
		printf("\n");
	}
	return 0;
}

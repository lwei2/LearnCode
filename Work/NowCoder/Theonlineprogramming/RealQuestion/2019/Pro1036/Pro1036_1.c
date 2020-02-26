/*************************************************************************
    > File Name: Pro1036_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

void fun(int a, int b)
{
	int m;
	int n;
	int s = 0;
	m = a;
	n = b;
	int tmp1 = 0;
	s = m/n;
	tmp1 = s;
	int da[10000];
	int tmp = 0;
	for(tmp = 0; tmp < 10000;)
	{
		m = m % n * 10;
		if(m > 0)
		{
			s = m/n;
			da[tmp] = m;
			tmp++;
		}
		else
		{
			break;
		}
	}
	int num = -1;
	int num1 = 0;
	for(int i = 0; i < tmp; i++)
	{
		for(int j = i + 1; j < tmp; j++)
		{
			if(da[i] == da[j])
			{
				num1 = i;
				num = j;
				break;
			}
		}
		if(num > -1)
			break;
	}
	if(num > 0)
	{
		printf("%d", tmp1);
		printf(".");
		for(int i = 0; i < num1; i++)
		{
			m = da[i];
			s = m/n;
			printf("%d",s);
		}
		printf("(");
		for(int i = num1; i < num; i++)
		{
			m = da[i];
			s = m/n;
			printf("%d",s);
		}
		printf(")");
	}
	else
		printf("%g",(float)(a)/b);
}

int main(void)
{
	int a;
	int b;
	while(scanf("%d %d", &a, &b) != EOF)
	{
		fun(a,b);
	}
	return 0;
}

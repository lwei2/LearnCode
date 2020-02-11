/*************************************************************************
    > File Name: Pro1015_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int index = 0;
	char ch[200];
	while(n && m)
	{
		long long count = 1;
		for(int i = 1; i < n; i++)
		{
			count *= n + m - i;
			count /= i;
			if(count > k)
				break;
		}
		if(k <= count)
		{
			ch[index++] = 'a';
			n--;
		}
		else
		{
			ch[index++] = 'z';
			m--;
			k -= count;
		}
	}
	if(k != 1)
	{
		printf("-1");
		return 0;
	}
	while(n--)
	{
		ch[index++] = 'a';
	}
	while(m--)
	{
		ch[index++] = 'z';
	}
	ch[index] = 0;
	printf("%s",ch);
	return 0;
}

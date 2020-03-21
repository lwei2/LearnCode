/*************************************************************************
    > File Name: Pro1063_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int m;
	int n;
	char ch;
	int k = 0;
	scanf("%c",&ch);
	while(scanf("%d,",&m))
	{
		if(m != '[' || m != ']')
		{
			if(k == 0)
				n = m;
			k += (m == n ? 1 : -1); 
		}
	}
	printf("%d\n",n);
	return 0;
}

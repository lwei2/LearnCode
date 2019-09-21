/*************************************************************************
    > File Name: Pro1003_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

int main(void)
{
	int n,s = 1;
	int ss, i;
	char a[10000];
	scanf("%d",&n);
	scanf("%s",&a);
	for(i = 0; i < n; i++)
	{
		if(a[i] == 'L')
			--s;
		else if(a[i] == 'R')
			++s;
	}
	if(s < 1)
		s = 4-(-s)%4;
	ss = s%4;
	if(ss == 1)
		printf("N");
	if(ss == 2)
		printf("E");
	if(ss == 3)
		printf("S");
	if(ss == 0)
		printf("W");
	return 0;
}

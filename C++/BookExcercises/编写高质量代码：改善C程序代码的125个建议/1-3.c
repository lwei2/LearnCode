/*************************************************************************
    > File Name: 1-3.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

char *copy(size_t n, const char *str)
{
	int i;
	char *p;
	if(n == 0)
	{

	}
	p = (char*)malloc(n);
	if(p == NULL)
	{

	}
	for(i = 0; i < n; i++)
		p[i] = *str++;
	return p;
}
int main(void)
{
	return 0;
}

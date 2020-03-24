/*************************************************************************
    > File Name: 1-5.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

char *copy(rsize_t n, const char *str)
{
	rsize_t i;
	char *p;
	if(n == 0 || n > RSIZE_MAX)
	{

	}
	p = (char*)malloc(n);
	if(p == NULL)
	{

	}
	for(i = 0; i < n; i++)
	{
		p[i] = *str++;
	}
	return p;
}
int main(void)
{
	return 0;
}

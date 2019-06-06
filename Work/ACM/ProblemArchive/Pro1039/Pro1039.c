/*************************************************************************
    > File Name: Pro1039.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char str[21];
int i;

int isvowels(char ch)
{
	if(ch == 'a' || ch == 'e' || ch == 'i'
			|| ch == 'o'||ch == 'u')
		return 1;
	return 0;
}
int t1(char str[])
{
	for(i = 0; str[i]; i++)
		if(isvowels(str[i]))
			return 1;
	return 0;
}

int t2(char str[])
{
	for(i = 2; str[i]; i++)
	{
		if(isvowels(str[i]) && isvowels(str[i-1]) && isvowels(str[i-2]))
			return 0;
		if(!isvowels(str[i]) && !isvowels(str[i-1]) && !isvowels(str[i-2]))
			return 0;
	}
	return 1;
}

int t3(char str[])
{
	for(i = 1; str[i]; i++)
		if(str[i] == str[i-1] && str[i]!='e'&&str[i]!='o')
			return 0;
	return 1;
}

int test(char str[])
{
	if(t1(str) == 0)
		return 0;
	if(t2(str) == 0)
		return 0;
	if(t3(str) == 0)
		return 0;
	return 1;
}


int main(void)
{
	while(gets(str))
	{
		if(strcmp(str,"end") == 0)
			break;
		printf("<%s> is %sacceptable.\n",str, test(str)?"":"not ");
	}
	return 0;
}

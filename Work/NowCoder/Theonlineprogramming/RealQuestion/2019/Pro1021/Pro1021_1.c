/*************************************************************************
    > File Name: Pro1021_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>

#define SIZE 128

int main(void)
{
	int count[26] = {0};
	char buf[SIZE];
	fgets(buf, SIZE, stdin);
	int i = 0;
	while(buf[i] != '\n')
	{
		count[buf[i++] - 'a']++;
		if(i == SIZE)
		{
			i = 0;
			fgets(buf, SIZE, stdin);
		}
	}
	i = 0;
	while(i < 26)
	{
		if(count[i] != 0)
			printf("%c%d",i+'a', count[i]);
		i++;
	}
	return 0;
}

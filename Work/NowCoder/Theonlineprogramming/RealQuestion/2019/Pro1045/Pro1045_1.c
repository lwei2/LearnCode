/*************************************************************************
    > File Name: Pro1045_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[1000];
	scanf("%s",str);
	int len = strlen(str);
	
	int count;
	int a = 1, b = 1;
	for(int i = 1; i < len; ++i)
	{
		if((str[i - 1] - '0')*10 + (str[i] - '0') <= 26)
			count = a + b;
		else
			count = b;
		a = b;
		b = count;
	}
	printf("%d",count);
	return 0;
}

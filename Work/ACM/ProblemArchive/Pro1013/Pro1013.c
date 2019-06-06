/*************************************************************************
    > File Name: Pro1013.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<string.h>


int main(void)
{
	int i;
	int sum = 0;
	char s[10000];
	while(scanf("%s",s)!=EOF && strcmp(s,"0") != 0)
	{
		for(i = 0; i < strlen(s); i++)
		{
			sum += s[i] - 48;
			if(sum > 9)
				sum = sum/10 + sum%10;
		}
		printf("%d\n",sum);
		sum = 0;
	}
	return 0;

}

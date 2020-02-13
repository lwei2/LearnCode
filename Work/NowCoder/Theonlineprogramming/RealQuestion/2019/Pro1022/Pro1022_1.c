/*************************************************************************
    > File Name: Pro1022_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	int number;
	scanf("%d",&number);
	char str[number][101];
	int len[number], num[number];
	for(int i = 0; i < number; i++)
	{
		scanf("%s",str[i]);
		len[i] = strlen(str[i]);
	}
	for(int i = 0; i < number; i++)
	{
		int ans = 0;
		for(int j = 0; j < 6; j++)
			ans = ans*10 + str[i][len[i] - 6 + j] - '0';
		num[i] = ans;
	}
	int tmp;
	for(int i = 0; i < number - 1; i++)
	{
		for(int j = 0; number-1-j; j++)
		{
			if(num[j] > num[j+1])
			{
				tmp = num[j+1];
				num[j+1] = num[j];
				num[j] = tmp;
			}
		}
	}
	for(int i = 0; i < number; i++)
		printf("%d\n",num[i]);
	return 0;
}

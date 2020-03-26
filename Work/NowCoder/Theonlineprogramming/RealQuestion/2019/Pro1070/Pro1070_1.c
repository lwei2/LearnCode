/*************************************************************************
    > File Name: Pro1070_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int count[26] = {0};
char s[1001];

int row = 1;
int width = 0;
int main(void)
{
	for(int i = 0; i < 26; i++)
		scanf("%d",&count[i]);
	scanf("%s",s);
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(width + count[s[i] - 'a'] > 100)
		{
			row++;
			width = 0;
		}
		width += count[s[i] - 'a'];
	}
	printf("%d %d\n",row, width);
	return 0;
}

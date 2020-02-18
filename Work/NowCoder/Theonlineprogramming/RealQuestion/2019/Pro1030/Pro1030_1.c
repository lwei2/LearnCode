/*************************************************************************
    > File Name: Pro1030_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100], b[100];
	int a[100],k = 0, i,m;
	scanf("%s",str);
	a[0] = 1;
	b[0] = str[0];
	for(i = 1; i < strlen(str); i++)
	{
		if(str[i] == str[i - 1])
			a[k]++;
		if(str[i] != str[i - 1])
		{
			k++;
			a[k] = 1;
			b[k] = str[i];
		}
	}
	for(m = 0; m <= k; m++)
		printf("%d%c",a[m],b[m]);
	return 0;
}


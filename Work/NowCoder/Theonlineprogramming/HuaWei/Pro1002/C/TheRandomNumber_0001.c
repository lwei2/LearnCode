/*************************************************************************
    > File Name: TheRandomNumber_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[110] = {0};
	char o[9] = {0};
	while(gets(s))
	{
		char *p = s;
		while(*p)
		{
			for(int i = 0; i < 8; i++)
			{
				if(p[i])
					o[i] = p[i];
				else
					o[i] = '0';
			}
			printf("%s\n",o);
			p += 8;
		}
		memset(s,0,110);
	}
	return 0;
}

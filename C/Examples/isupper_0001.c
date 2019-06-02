/*************************************************************************
    > File Name: isupper_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;
	do{
		ch = getchar();
		if(isupper(ch))
		{
			printf("%c\n",ch);
		}
	}while(ch!=27);
	
	return 0;
}

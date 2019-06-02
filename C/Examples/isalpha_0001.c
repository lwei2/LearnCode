/*************************************************************************
    > File Name: isalpha_0001.c
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
		if(isalpha(ch))
		{
			printf("the ch is %c \n",ch);
		}
		else
		{
			printf("the ch is algha \n");
		}
	}while(ch != '.');
	return 0;
}

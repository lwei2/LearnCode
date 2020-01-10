/*************************************************************************
    > File Name: 2-1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#define DEBUG

using namespace std;

int main(void)
{
	int i = 0;
	char c;
	while(1)
	{
		i++;
		c = getchar();
		if(c != '\n')
			getchar();
		if(c == 'q' || c == 'Q')
		{
#ifdef DEBUG
			printf("we got:%c, about to exit.\n",c);
#endif
			break;
		}
		else
		{
			printf("i = %d",i);
#ifdef DEBUG
			printf(",we got:%c",c);
#endif
			printf("\n");
		}
	}
	return 0;
}

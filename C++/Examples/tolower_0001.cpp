/*************************************************************************
    > File Name: tolower_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main(void)
{
	int i;
	char string[] = "THIS IS A STRING";
	printf("%s\n",string);
	for(i = 0; i < strlen(string); i++)
		putchar(tolower(string[i]));
	printf("\n");

	return 0;
}

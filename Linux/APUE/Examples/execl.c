/*************************************************************************
    > File Name: execl.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(void)
{
	execl("/bin/ls", "ls", "-l", NULL);
	return 0;
}

/*************************************************************************
    > File Name: execl_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int res = execl("/bin/ls", "ls", "-a","/etc/passwd",(char*)0);
	if(res == -1)
		printf("execl failed...\n");
	printf("execl success...\n");
	return 0;
}

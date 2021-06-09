/*************************************************************************
    > File Name: vfork.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<unistd.h>

using namespace std;


int main(void)
{
	int a = 10;
	pid_t pid = vfork();
	if(pid<0)
	{
		perror("vfork error\n");
		exit(EXIT_FAILURE);
	}
	else if(pid == 0)
	{
		a++;
		printf("in child a:%d\n",a);
		execl("/bin/ls", "ls", "-l",NULL);
	}
	else
	{
		printf("in parent a:%d\n",a);
		return 0;
	}
}

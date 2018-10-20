/*************************************************************************
    > File Name: pipe.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 07时32分53秒
 ************************************************************************/

#include<stdio.h>
#include<unistd.h>

int main(void)
{
	int fd[2];
	pid_t pid;
	char buffer[20];
	if(pipe(fd) < 0)
		printf("Create Pipe Error!\n");
	if((pid = fork()) < 0)
		printf("Fork Error!\n");
	else if(pid > 0)
	{
		close(fd[0]);
		write(fd[1],"hello world\n",12);
	}
	else
	{
		close(fd[1]);
		read(fd[0],buffer,20);
		printf("%s",buffer);
	}

	return 0;
}

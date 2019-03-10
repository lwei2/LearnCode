/*************************************************************************
    > File Name: write_fifo.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 19时02分59秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<time.h>

int main(void)
{
	int fd;
	int n,i;
	char buf[1024];
	time_t tp;
	printf("I am %d process.\n",getpid());
	if((fd = open("fifo1",O_WRONLY))<0)
	{
		perror("Open FIFO failed!");
		exit(1);
	}
	for(int i = 0; i < 10; ++i)
	{
		time(&tp);
		n = sprintf(buf,"Process %d's time is %s",getpid(),ctime(&tp));
		printf("Send message: %s ",buf);
		if(write(fd,buf,n+1)<0)
		{
			perror("Write FIFO failed");
			close(fd);
			exit(1);
		}
		sleep(1);
	}
	close(fd);
	return 0;
}

/*************************************************************************
    > File Name: read_fifo.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 19时13分24秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/stat.h>

int main(void)
{
	int fd; 
	int len ;
	char buf[1024];
	if(mkfifo("fifo",0666) < 0 && errno!=EEXIST)
		perror("Create FIFO failed!");
	if((fd = open("fifo1", O_RDONLY)) < 0)
	{
		perror("Open FIFO failed");
		exit(1);
	}
	while((len = read(fd,buf,1024))>0)
	{
		printf("Read message : %s ", buf);
	}
	close(fd);
	return 0;
}

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

#define BUFFERSIZE 4096

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("usage:\n mycopy src dst\n");
		return 1;
	}
	int srcfd = open(argv[1], O_RDONLY);
	if(srcfd == -1)
	{
		perror("open error");
		return 1;
	}
	int dstfd = open(argv[2], O_CREAT|O_WRONLY,0666);
	if(dstfd == -1)
	{
		perror("open error");
		return 1;
	}
	int len = 0;
	char buffer[BUFFERSIZE] = {0};

	while((len = read(srcfd, buffer,BUFFERSIZE)) > 0)
	{
		write(dstfd, buffer, len);
	}
	close(srcfd);
	close(dstfd);
	return 0;
}

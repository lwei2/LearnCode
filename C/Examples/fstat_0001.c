/*************************************************************************
    > File Name: fstat_0001.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	struct stat buf;
	int fd = open("/etc/passwd", O_RDONLY);
	fstat(fd, &buf);
	printf("/etc/passwd file size + %ld\n",buf.st_size);

	return 0;
}


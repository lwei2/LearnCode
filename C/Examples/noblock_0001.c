#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

char MSG_TPY[] = "try again!\n";

int main(void)
{
	char buffer[10];
	int len;
	int fd = open("/dev/tty",O_RDONLY|O_NONBLOCK);
	if(fd < 0)
	{
		printf("open error\n");
		return -1;
	}
	while(1)
	{
		len = read(fd, buffer, 10);
		if(len < 0)
		{
			if(errno == EAGAIN)
			{
				write(STDOUT_FILENO, MSG_TPY, strlen(MSG_TPY));
				sleep(1);
			}
			else
			{
				perror("read error");
				exit(1);
			}
		}
		else
			break;
	}
	write(STDOUT_FILENO, buffer, len);

	return 0;
}

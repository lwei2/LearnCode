/*************************************************************************
    > File Name: test_0005.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/file.h>

using namespace std;

#define PID_BUF_LEN (20)
#define RUN_PID_FILE "/var/run/myserver.pid"

int server_is_running()
{
	int fd = open(RUN_PID_FILE, O_WRONLY | O_CREAT);
	if(fd  < 0)
	{
		printf("open run pid err(%d)! %s\n",errno, RUN_PID_FILE);
		return -1;
	}

	if(flock(fd, LOCK_EX|LOCK_NB) == -1)
	{
		printf("server is running now! errno = %d\n", errno);
		close(fd);
		return 1;
	}

	printf("server is not running! begin to run ... pid =%ld\n",(long)getpid());
	char pid_buf[PID_BUF_LEN] = {0};
	snprintf(pid_buf, sizeof(pid_buf) - 1, "%ld\n", (long)getpid());
	write(fd, pid_buf, strlen(pid_buf));
	return 0;
}
int main(void)
{
	if(0 != server_is_running())
	{
		printf("server process is running!!! Current process will exit!\n");
		return -1;
	}
	while(1)
	{
		printf("server doning ...\n");
		sleep(2);		
	}
	return 0;
}


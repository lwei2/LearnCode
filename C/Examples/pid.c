#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

int main(void)
{
	pid_t pid = getpid();
	pid_t ppid = getppid();
	printf("Process ID:%d\n",pid);
	printf("Parent Process ID:%d\n", ppid);
	sleep(3);

	return 0;
}

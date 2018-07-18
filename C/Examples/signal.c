#include <stdio.h>
#include <unistd.h>

int main(void)
{
	printf("Hello signal!I am %d\n",getpid());
	while(1)
	{
		write(STDOUT_FILENO,".",1);
		sleep(10);
	}
	return 0;
}

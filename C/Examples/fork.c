#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
	char buf[] = "hello, I'm father\n";
	write(STDOUT_FILENO, buf, strlen(buf));
	printf("before fork\n");

	pid_t pid = fork();
	if(!pid)
	{
		printf("I'm child %d; my father is %d\n", getpid(), getppid());
		sleep(2);
	}
	else if(pid > 0)
	{
		printf("I'm father %d; my child is %d\n", getpid(),pid);
	}
	else
	{
		perror("fork error");
		return 1;
	}
	return 0;
}

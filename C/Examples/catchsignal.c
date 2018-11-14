#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void sighandler(int sig)
{
	switch(sig)
	{
		case SIGUSR1:
			printf("hello SIGUSR1\n");
			break;
		case SIGUSR2:
			printf("hello SIGUSR2\n");
			break;
		case SIGINT:
			printf("hello SIGINT\n");
			break;
		case SIGTSTP:
			printf("hello SIGTSTP\n");
			break;
		case SIGQUIT:
			printf("hello SIGQUIT\n");
			break;
		case SIGSEGV:
			printf("hello SIGSEGV\n");
			break;
		default:
			printf("hello signal\n");
	}
	sleep(2);
}

int main(void)
{
	printf("I am %d\n", getpid());
	if(SIG_ERR == signal(SIGUSR1, sighandler))
	  perror("signal SIGUSR1");
	if(SIG_ERR == signal(SIGUSR2, sighandler))
	  perror("signal SIGUSR2");
	if(SIG_ERR == signal(SIGTSTP, sighandler))
	  perror("signal SIGTSTP");
	if(SIG_ERR == signal(SIGQUIT, sighandler))
	  perror("signal SIGQUIT");
	if(SIG_ERR == signal(SIGSEGV, sighandler))
	  perror("signal SIGSEGV");

	while(1)
	{
		write(STDOUT_FILENO, ".", 1);
		sleep(10);
	}
	return 0;
}

















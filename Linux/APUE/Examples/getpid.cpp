#include<stdlib.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
    pid_t pid;
    printf("Before fork ...\n");
    switch(pid=fork())
    {
        case -1:
            printf("fock call fail\n");
            exit(1);
        case 0:
            printf("The pid of child:%d\n",getpid());
            printf("The pid of child's parent:%d\n",getppid());
            printf("Child exiting ...\n");
            exit(0);
        default:
            printf("the pid of parent:%d\n",getpid());
            printf("the pid of parent's child:%d\n",pid);

    }
    printf("After fork, the program exiting...\n");
    return 0;
}

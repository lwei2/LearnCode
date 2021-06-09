#include<iostream>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>

using namespace std;
int main(void)
{
    pid_t pid = fork();
    if(pid<0)
    {
        cout<<"Error"<<endl;
    }
    else if(pid ==0)
    {
        cout<<"子进程"<<endl;
    }
    else
    {
        cout<<"父进程"<<endl;
    }
    return 0;
}

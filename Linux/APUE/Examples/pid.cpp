#include<iostream>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

using namespace std;

int main(void)
{
    cout<<"the process ID:"<<(long)getpid()<<endl;
    cout<<"the process's parent ID:"<<(long)getppid()<<endl;
    return 0;
}

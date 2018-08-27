#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>

int main(void)
{
    int serversock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serveraddr;
    memset(&serveraddr, 0 ,sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_port = htons(1234);
    connect(serversock, (struct sockaddr*)&serveraddr, sizeof(serveraddr));

    char buffer[40];
    read(serversock, buffer,sizeof(buffer)-1);
    printf("Message from server:%s\n", buffer);

    close(serversock);
    return 0;
}

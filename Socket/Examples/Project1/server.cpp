#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<sys/types.h>


int main(void)
{
    int serversock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in serveraddr;
    memset(&serveraddr, 0, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_port = htons(1234);
    bind(serversock,(struct sockaddr*)&serveraddr,sizeof(serveraddr));
    listen(serversock,20);
    struct sockaddr_in clientaddr;
    socklen_t clientsize = sizeof(clientaddr);
    int clientsock = accept(serversock, (struct sockaddr*)&clientaddr, &clientsize);
    char buf[] = "hello world!";
    write(clientsock, buf, sizeof(buf));
    close(serversock);
    close(clientsock);
    return 0;
}

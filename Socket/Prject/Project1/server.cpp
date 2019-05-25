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
	//1.创建套接字
    int serversock = socket(AF_INET, SOCK_STREAM, 0);

	//2.将套接字和IP、端口绑定
    struct sockaddr_in serveraddr;
    memset(&serveraddr, 0, sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_port = htons(1234);
    bind(serversock,(struct sockaddr*)&serveraddr,sizeof(serveraddr));

	//3.进入监听状态，等待用户发起请求
    listen(serversock,20);

	//4.接收客户端请求
    struct sockaddr_in clientaddr;
    socklen_t clientsize = sizeof(clientaddr);
    int clientsock = accept(serversock, (struct sockaddr*)&clientaddr, &clientsize);

	//5.向客户端发送数据
	char buf[] = "hello world!";
    write(clientsock, buf, sizeof(buf));

	//6.关闭套接字
    close(serversock);
    close(clientsock);
    return 0;
}

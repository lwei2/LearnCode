#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>

int main(void)
{
	//1.创建套接字
	int serversock = socket(AF_INET, SOCK_STREAM, 0);

	//2.向指定的服务器发请求
    struct sockaddr_in serveraddr;
    memset(&serveraddr, 0 ,sizeof(serveraddr));
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_port = htons(1234);

	//3.连接服务器
    connect(serversock, (struct sockaddr*)&serveraddr, sizeof(serveraddr));

    //4.读取服务器传回来的消息
	char buffer[40];
    read(serversock, buffer,sizeof(buffer)-1);
    printf("Message from server:%s\n", buffer);

	//5.关闭连接，关闭套接字
    close(serversock);
    return 0;
}

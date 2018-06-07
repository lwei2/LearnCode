#include<stdio.h>
#include<string.h>
#include<time.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<arpa/inet.h>

const int MAXLEN = 4096;
const int LISTENQ = 1024;

int main(int argc,char **argv)
{
	int listenfd,connfd;
	struct sockaddr_in server_addr,client_addr;
	char buff[MAXLEN];
	time_t ticks;
	bzero(&server_addr,sizeof(server_addr));

	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s_addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(8080);

	listenfd = socket(AF_INET,SOCK_STREAM,0);
	if(listenfd < 0)
	{
		printf("socket error\n");
		return 0;
	}
	bind(listenfd,(struct sockaddr*)&server_addr,sizeof(server_addr));
	listen(listenfd,LISTENQ);
	for(;;)
	{
		socklen_t len = sizeof(client_addr);
		connfd = accept(listenfd,(struct sockaddr*)&client_addr,&len);
		printf("connect from %s,port %d\n",inet_ntop(AF_INET,&client_addr.sin_addr,buff,sizeof(buff)),ntohs(client_addr.sin_port));
		read(connfd,buff,strlen(buff));
		printf("Recv msg:%s\n",buff);

		bzero(buff,sizeof(buff));
		ticks =time(NULL);
		snprintf(buff,sizeof(buff),"%.24s\r\n",ctime(&ticks));
		write(connfd,buff,strlen(buff));
		printf("Send msg:%s\n",buff);
		close(connfd);


	}
	return 0;
}

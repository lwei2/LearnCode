/*************************************************************************
    > File Name: service_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/epoll.h>
#include <unordered_map>
#include <fcntl.h>

using namespace std;

#define SERV_IP "0.0.0.0"
#define SERV_PORT 8888
#define MAX_CONN 1024


int main(void)
{
	sockaddr_in servaddr, clitaddr;
	unordered_map<int, sockaddr_in> fdmap;

	epoll_event evt, evts[MAX_CONN];
	char buf[1024];
	int lfd;
	int connfd;
	int readycnt;
	int epfd;

	socklen_t addr_len = sizeof(clitaddr);


	if((lfd = socket(AF_INET, SOCK_STREAM, 0)) == -1)
	{
		cout<<"Create socket default:"<<strerror(errno)<<endl;
		return 0;
	}
	
	servaddr.sin_family = AF_INET;
	servaddr.sin_port = htons(SERV_PORT);
	servaddr.sin_addr.s_addr = inet_addr(SERV_IP);
	if(bind(lfd,(sockaddr*)&servaddr, sizeof(servaddr)) == -1)
	{
		cout<<"bind fault:"<<strerror(errno)<<endl;
		return 0;
	}
	if(listen(lfd, 128) == -1)
	{
		cout<<"listen fault:"<<strerror(errno)<<endl;
		return 0;
	}
	epfd = epoll_create(MAX_CONN);
	if(epfd == -1)
	{
		cout<<"epoll create fault:"<<strerror(errno)<<endl;
		return 0;
	}
	evt.events = EPOLLIN;
	evt.data.fd = lfd;
	if(epoll_ctl(epfd, EPOLL_CTL_ADD, lfd, &evt) == -1)
	{
		cout<<"epoll add error:"<<strerror(errno)<<endl;
		return 0;
	}
	cout<<"Init Success!"<<endl;
	cout<<"host ip:"<<inet_ntoa(servaddr.sin_addr)<<" port :"<<ntohs(servaddr.sin_port)<<endl;
	cout<<"Waiting for nonnections ..."<<endl;

	while(1)
	{
		readycnt = epoll_wait(epfd, evts, MAX_CONN, -1);
		if(-1 == readycnt)
		{
			cout<<"epoll fault:"<<strerror(errno)<<endl;
			return 0;
		}
		for(int i = 0;  i < readycnt; i++)
		{
			if(evts[i].data.fd == lfd)
			{
				connfd = accept(lfd, (sockaddr*)&clitaddr, &addr_len);
				if(-1 == connfd)
				{
					cout<<"accept fault:"<<strerror(errno)<<endl;
					continue;
				}
				cout<<inet_ntoa(clitaddr.sin_addr)<<" : "<<ntohs(clitaddr.sin_port)<<
					" connected ..." <<endl;
				fdmap[connfd] = clitaddr;
				fcntl(connfd, F_SETFL, O_NONBLOCK);
				
				evt.events = EPOLLIN | EPOLLET;
				evt.data.fd = connfd;
				if(epoll_ctl(epfd, EPOLL_CTL_ADD, connfd, &evt) == -1)
				{
					cout<<" epoll add error :"<< strerror(errno)<<endl;
					return 0;
				}
			}
			else
			{
				int readcnt = 0;
				while(1)
				{
					readcnt = read(evts[i].data.fd, buf, sizeof(buf));
					if(0 == readcnt)
					{
						if(epoll_ctl(epfd, EPOLL_CTL_DEL, evts[i].data.fd, NULL) == -1)
						{
							cout<<"epoll del error:"<<strerror(errno)<<endl;
							return 0;
						}
						cout<<inet_ntoa(fdmap[evts[i].data.fd].sin_addr)<<" : "
							<<ntohs(fdmap[evts[i].data.fd].sin_port)<<" exit..."<<endl;
						close(evts[i].data.fd);
						fdmap.erase(evts[i].data.fd);
					}
					else if(readcnt > 0)
					{
						cout<<" (From "<<inet_ntoa(fdmap[evts[i].data.fd].sin_addr)<<" : "
							<<ntohs(fdmap[evts[i].data.fd].sin_port)<<")";
						for(int j = 0; j < readcnt; j++)
							cout<<buf[j];
						cout<<endl;
					}
					else
					{
						if(errno == EAGAIN)
							continue;
						else
							break;
					}
				}
			}
		}
	}
	close(lfd);
	return 0;
}

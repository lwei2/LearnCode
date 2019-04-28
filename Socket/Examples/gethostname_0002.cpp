#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>

using namespace std;

int getlocalip(char *outip)
{
	int i = 0;
	int sockfd;
	struct ifconf ifconf;
	char buf[512];
	struct ifreq *ifreq;
	char *ip;
	ifconf.ifc_len=512;
	ifconf.ifc_buf=buf;
	if((sockfd = socket(AF_INET, SOCK_DGRAM, 0))<0)
		return -1;
	ioctl(sockfd, SIOCGIFCONF, &ifconf);
	close(sockfd);
	ifreq = (struct ifreq*)buf;
	for(i = (ifconf.ifc_len/sizeof(struct ifreq));i > 0; i--)
	{
		ip = inet_ntoa(((struct sockaddr_in*)&(ifreq->ifr_addr))->sin_addr);
		if(strcmp(ip,"127.0.0.1") == 0)
		{
			ifreq++;
			continue;
		}
		strcpy(outip,ip);
		return 0;
	}
	return -1;
}

int main(void)
{
	char ip[64];
	memset(ip,0,sizeof(ip));
	if(getlocalip(ip) == 0)
		cout<<"the ip is"<<ip<<endl;
	else
		cout<<"the ip is wrong"<<endl;
	return 0;
}

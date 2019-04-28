#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>

using namespace std;

int main(void)
{
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
	for(int i = (ifconf.ifc_len/sizeof(struct ifreq)); i > 0; i--)
	{
		cout<<"name:"<<ifreq->ifr_name<<endl;
		cout<<"ip :" <<inet_ntoa(((struct sockaddr_in*)&(ifreq->ifr_addr))->sin_addr)<<endl;
		ifreq++;		
	}
	cout<<endl;
	return 0;
}

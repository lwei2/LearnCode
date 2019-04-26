#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

using namespace std;

int main(void)
{
	char str[128];
	struct hostent *ht;
	int res = gethostname(str, sizeof(str));
	if(-1 == res)
		fprintf(stderr, "get the host name failed!");
	ht = gethostbyname(str);
	cout<<"host-name:"<<ht->h_name<<endl;
	for(int i = 0; ht->h_addr_list[i]; i++)
		printf("host-ip:%s\n", inet_ntoa(*(struct	in_addr *)(ht->h_addr_list[i])));
	return 0;
}

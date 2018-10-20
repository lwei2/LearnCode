/*************************************************************************
    > File Name: msg_server.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 20时20分05秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<sys/types.h>

#define MSG_FILE "/etc/passwd"

struct msg_form
{
	long mtype;
	char mtext[256];
};
int main(void)
{
	int msgid ;
	key_t key;
	struct msg_form msg;
	
	if((key = ftok(MSG_FILE, 'z')) < 0)
	{
		perror("ftok error");
		exit(1);
	}
	printf("Message Queue - Server key is %d\n",key);
	if((msgid = msgget(key, IPC_CREAT|0777)) == -1)
	{
		perror("msgget error");
		exit(1);
	}
	printf("my msgid is :%d \n",msgid);
	printf("my pid is :%d \n",getpid());

	for(;;)
	{
		msgrcv(msgid, &msg, 256, 888, 0);
		printf("Server: receive msg.mtext is : %s \n", msg.mtext);
		printf("Server: receive msg.mtype is : %ld \n",msg.mtype);
		msg.mtype = 999;
		sprintf(msg.mtext, "hello, I'm server %d", getpid());
		msgsnd(msgid, &msg, sizeof(msg.mtext),0);
	}


	return 0;
}

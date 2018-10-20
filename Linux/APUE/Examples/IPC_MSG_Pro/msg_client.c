/*************************************************************************
    > File Name: msg_client.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 20时33分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<sys/msg.h>
#include<unistd.h>
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
	if((key = ftok(MSG_FILE,'1'))<0)
	{
		perror("ftok error");
		exit(1);
	}
	printf("Message Queue - Client key is : %d \n", key);

	if((msgid = msgget(key, IPC_CREAT|0777)) == -1)
	{
		perror("msgget error");
		exit(1);
	}
	printf("my msgid is :%d \n", msgid);
	printf("my pid is :%d \n", getpid());
	msg.mtype = 888;
	sprintf(msg.mtext, "hello, I'm client %d ",getpid());
	msgsnd(msgid, &msg, sizeof(msg.mtext), 0);

	msgrcv(msgid, &msg, 256, 999, 0);
	printf("Client :receive msg.mtext is : %s \n", msg.mtext);
	printf("Client :receive msg.mtype is : %ld \n", msg.mtype);
	return 0;
}



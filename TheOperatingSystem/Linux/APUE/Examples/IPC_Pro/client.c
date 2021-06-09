/*************************************************************************
    > File Name: client.c
    > Author: lwei2
    > Mail: luweidreamlife@163.com 
    > Created Time: 2018年10月19日 星期五 23时20分04秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<sys/sem.h>
#include<sys/msg.h>
#include<string.h>

struct msg_form
{
	long mtype;
	char mtext;
};
union semun
{
	int val;
	struct semid_ds *buf;
	unsigned short *array;
};

int sem_p(int sem_id)
{
	struct sembuf sbuf;
	sbuf.sem_num = 0;
	sbuf.sem_op = -1;
	sbuf.sem_flg = SEM_UNDO;
	if(semop(sem_id, &sbuf,1) == -1)
	{
		perror("P operation error");
		return -1;
	}
	return 0;
}

int sem_v(int sem_id)
{
	struct sembuf sbuf;
	sbuf.sem_num = 0;
	sbuf.sem_op = 1;
	sbuf.sem_flg = SEM_UNDO;

	if(semop(sem_id, &sbuf, 1) == -1)
	{
		perror("V operation error");
		return -1;
	}
	return 0;
} 

int main(void)
{
	key_t key;
	int shmid, semid, msqid;
	char *shm;
	struct msg_form msg;
	int flag = 1;
	if((key = ftok(".", 'z')) < 0)
	{
		perror("ftok error");
		exit(1);
	}
	if((shmid = shmget(key,1024,0)) == -1)
	{
		perror("shmget error");
		exit(1);
	}
	shm = (char*)shmat(shmid,0,0);
	if((int)shm == -1)
	{
		perror("attach shared memory error");
		exit(1);
	}
	if((msqid = msgget(key,0)) == -1)
	{
		perror("msgget error");
		exit(1);
	}

	if(semid = semget(key,0,0) == -1)
	{
		perror("semget error");
		exit(1);
	}
	printf("==================================\n");
	printf("*            IPC				 *\n");
	printf("* Input r to send data to server *\n");
	printf("* Input q to quit.               *\n");
	printf("==================================\n");

	while(flag)
	{
		char c;
		printf("Please input command:\n");
		scanf("%c",&c);
		switch(c)
		{
			case 'r':
				printf("data to send: ");
				sem_p(semid);
				scanf("%s",shm);
				sem_v(semid);
				while((c = getchar())!='\n' && c!=EOF)
				{
					msg.mtype = 888;
					msg.mtext = 'r';
					msgsnd(msqid, &msg, sizeof(msg.mtext),0);
				}
				break;
			case 'q':
				msg.mtype = 888;
				msg.mtext = 'q';
				msgsnd(msqid, &msg, sizeof(msg.mtext),0);
				flag = 0;
				break;
			default:
				printf("Wrong input!\n");
				while((c = getchar())!='\n' && c!=EOF)
					;
				
		}
	}

	shmdt(shm);

	return 0;
}

/*************************************************************************
    > File Name: Pro1078_1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

struct yu_store
{
	struct yu_store *front;
	int a;
	struct yu_store *next;
};

int main(void)
{
	long int num;
	long int yu = 1;
	int n;
	int count;
	struct yu_store *f,*p,*s;
	scanf("%ld",&num);
	getchar();
	scanf("%d",&n);
	p =(struct yu_store*)malloc(sizeof(struct yu_store));
	f = p;
	f->front = NULL;
	f->next = NULL;
	if(num == 0)
	{
		printf("%ld",num);
		return 0;
	}
	while(num!=0)
	{
		yu = num%n;
		num = num/n;
		s = (struct yu_store*)malloc(sizeof(struct yu_store));
		p->a = yu;
		p->next = s;
		s->front = p;
		s->next = NULL;
		p = s;
	}
	while(f != p)
	{
		p = p->front;
		printf("%d",p->a);
		free(s);
		s = p;
	}
	free(f);
	return 0;
}

/*************************************************************************
    > File Name: list.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *create(struct node *phead, int d);

void display(struct node *phead)
{
	while(phead!=NULL)
	{
		printf("%d\t",phead->data);
		phead = phead->next;
	}
	printf("\n");
	return ;
}

struct node *create(struct node *phead, int d)
{
	struct node *tmp = (struct node *)malloc(sizeof(struct node));
	tmp->data = d;
	tmp->next = NULL;
	struct node *find = phead;

	if(phead == NULL)
		return tmp;
	else
	{
		while(find->next!=NULL)
		{
			find = find->next;
		}
		find->next = tmp;
		return phead;
	}
}


struct node *del_repeat(struct node *phead, int d)
{
	struct node *tmp = phead;
	struct node *pre = NULL;
	int flag = 0;
	while(tmp!=NULL)
	{
		if(tmp->data == d)
		{
			if(flag == 0)
			{
				flag = 1;
				tmp = tmp->next;
				continue;
			}
			else
			{
				pre->next = tmp->next;
				free(tmp);
				tmp = pre;
			}
		}
		pre = tmp;
		tmp = tmp->next;
	}
	return phead;
}


int main(void)
{
	struct node *head = NULL;
	head = create(head,20);
	head = create(head,17);
	head = create(head,10);
	head = create(head,17);
	head = create(head,37);
	head = create(head,7);
	head = create(head,17);
	display(head);
	del_repeat(head,17);
	display(head);
	return 0;
}





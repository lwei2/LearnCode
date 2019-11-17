/*************************************************************************
    > File Name: DoubleList.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/
#ifndef __DOUBLE_LIST_H_
#define __DOUBLE_LIST_H_

#include <stdio.h>

typedef struct Node
{
	DataType data;
	struct Node *next;
	struct Node *prior;
}DLNode;


void ListInitiate(DLNode **head)
{
	*head = (DLNode *)malloc(sizeof(DLNode));
	(*head)->prior = *head;
	(*head)->next = *head;
}

int ListInsert(DLNode *head, int i, DataType x)
{
	DLNode *p, *s;
	int j;
	p = head->next;
	j = 0;
	while(p != head && j < i)
	{
		p = p->next;
		j++;
	}
	if(j != i)
	{
		printf("插入位置参数出错!\n");
		return 0;
	}
	s = (DLNode*)malloc(sizeof(DLNode));
	s->data = x;

	s->prior = p->prior;
	p->prior->next = s;
	s->next = p;
	p->prior = s;
	return 1;
}

int ListDelete(DLNode *head, int i, DataType *x)
{
	DLNode *p;
	int j;
	p = head->next;
	j = 0;
	while(p->next != head &&j < i)
	{
		p = p->next;
		j++;
	}
	if(j != i)
	{
		printf("删除位置参数错误!\n");
		return 0;
	}
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return 1;
}

int ListLength(DLNode *head)
{
	DLNode *p = head;
	int size = 0;
	while(p->next != head)
	{
		p = p->next;
		size++;
	}
	return size;
}

void Destroy(DLNode **head)
{
	DLNode *p,*p1;
	int i, n = ListLength(*head);
	p = *head;
	for(i = 0; i <= n; i++)
	{
		p1 = p;
		p = p->next;
		free(p1);
	}
	*head = NULL;
}
#endif



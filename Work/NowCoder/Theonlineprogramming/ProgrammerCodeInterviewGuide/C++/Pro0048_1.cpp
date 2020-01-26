/*************************************************************************
    > File Name: Pro0048_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define maxlen 1000005

int n,a[maxlen];
int m,b[maxlen];

typedef struct node
{
	int data;
	struct node *next;
}LNode, *LinkList;

void createList(ListList &l, int *a, int n)
{
	int i;
	LNode *s, *r;
	l = (LinkList)malloc(sizeof(LinkList));
	l->next = NULL;
	r = l;
	for(i = 0; i < n; i++)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}

void getCommonNodeval(LinkList l1, LinkList l2)
{
	LNode *p = l1->next, *q = l2->next;
	while(p != NULL && q != NULL)
	{
		if(p->data == q->data)
		{
			printf("%d ", p->data);
			p = p->next;
			q = q->next;
		}
		else
		{
			if(p->data < q->data)
				p = p->next;
			else
				q = q->next;
		}
	}
}

int main(void)
{
	int i;
	ListList l1,l2;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	scanf("%d",&m);
	for(i = 0; i < m; i++)
		scanf("%d",&b[i]);

	createList(l1, a,n);
	createList(l2, b,m);
	getCommonNodeval(l1,l2);
	return 0;
}

/*************************************************************************
    > File Name: 2-3.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include <malloc.h>
#include "LinkList.h"

// typedef int DataType;

int main(void)
{
	SLNode *head;
	int i,x;
	ListInitiate(&head);
	for(i = 0; i < 10; i++)
		ListInsert(head, i, i + 1);
	ListDelete(head, 4, &x);
	for(i = 0;i < ListLength(head); i++)
	{
		ListGet(head, i, &x);
		printf("%d ",x);
	}
	Destroy(&head);
	return 0;
}

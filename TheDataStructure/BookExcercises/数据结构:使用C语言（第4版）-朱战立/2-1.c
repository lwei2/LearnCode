/*************************************************************************
    > File Name: 2-1.c
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include <stdio.h>
#include "SeqList.h"


int main(void)
{
	SeqList myList;
	int i,x;
	ListInitiate(&myList);
	for(i = 0; i < 10; i++);
		ListInsert(&myList, i, i +1);
	ListDelete(&myList, 4, &x);
	for(i = 0; i<ListLength(myList); i++)
	{
		ListGet(myList, i, &x);
		printf("%d ",x);
	}
	printf("\n");
	return 0;
}

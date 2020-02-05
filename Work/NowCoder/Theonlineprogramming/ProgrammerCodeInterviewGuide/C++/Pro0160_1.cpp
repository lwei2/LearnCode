/*************************************************************************
    > File Name: Pro0160_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct list_node
{
	int val;
	struct list_node *next;
};

list_node *input_list(void)
{
	int n, val;
	list_node *phead = new list_node();
	list_node *cur_pnode = phead;
	scanf("%d",&n);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d",&val);
		if(i == 1)
		{
			cur_pnode->val = val;
			cur_pnode->next = NULL;
		}
		else
		{
			list_node *new_pnode = new list_node();
			new_pnode->val = val;
			new_pnode->next = NULL;
			cur_pnode->next = new_pnode;
			cur_pnode = new_pnode;
		}
	}
	return phead;
}

list_node *relocate(list_node *head)
{
	list_node *r_list = new list_node();
	list_node *p_list = r_list;
	list_node *left_list = head;
	list_node *right_list = head;
	list_node *r_list_h = NULL;
	int N = 0;
	list_node *n_list = head;
	while(n_list != NULL)
	{
		n_list = n_list->next;
		N++;
	}
	int i = N/2;
	while(i-- > 0)
		right_list = right_list->next;
	r_list_h = right_list;
	while(right_list != NULL)
	{
		if(left_list == r_list_h)
			break;
		r_list->next = left_list;
		left_list = left_list->next;
		r_list = r_list->next;

		r_list->next = right_list;
		right_list = right_list->next;
		r_list = r_list->next;
	}
	return p_list->next;
}

void print_list(list_node *head)
{
	while(head != NULL)
	{
		printf("%d ",head->val);
		head = head->next;
	}
	puts("");
}

int main(void)
{
	list_node *head = input_list();
	list_node *new_head = relocate(head);
	print_list(new_head);
	return 0;
}

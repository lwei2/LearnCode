/*************************************************************************
    > File Name: Pro0157_1.cpp
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

list_node *find_kth_node(list_node *head, int k)
{
	list_node *t = head;
	for(int i = 1; i < k; ++i)
		t = t->next;
	return t;
}

list_node *input_list(void)
{
	int n, val;
	list_node *phead = new list_node();
	list_node *cur_pnode = phead;
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i)
	{
		scanf("%d", &val);
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

void remove_node_wired(list_node *node)
{
	list_node *p = node;
	p->val = p->next->val;
	p = p->next;
	list_node *p_pre = node;
	while(p->next)
	{
		p->val = p->next->val;
		p = p->next;
		p_pre = p_pre->next;
	}
	p_pre->next = NULL;
}

void print_list(list_node *head)
{
	while(head != NULL)
	{
		printf("%d ", head->val);
		head = head->next;
	}
	puts("");
}
int main(void)
{
	list_node *head = input_list();
	int n;
	scanf("%d",&n);
	list_node *node = find_kth_node(head, n);
	remove_node_wired(node);
	print_list(head);
	return 0;
}

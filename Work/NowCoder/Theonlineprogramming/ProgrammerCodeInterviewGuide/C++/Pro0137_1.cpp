/*************************************************************************
    > File Name: Pro0137_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <unordered_set>

using namespace std;

class Node
{
	public:
		int value;
		Node *next;
};

Node *inputlist(void)
{
	Node *head = new Node();
	Node *cur = head;
	int n, value;
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cin>>value;
		if(0 == i)
		{
			head->value = value;
			cur->next = NULL;
		}
		else
		{
			Node *newnode = new Node();
			newnode->value = value;
			newnode->next = NULL;
			cur->next = newnode;
			cur = newnode;
		}
	}
	return head;
}

void printlinkedlist(Node *node)
{
	while(node != NULL)
	{
		cout<<node->value<<" ";
		node = node->next;
	}
	cout<<endl;
}

void removeReq1(Node *head)
{
	if(NULL == head)
		return;
	
	unordered_set<int> set;
	Node *pre = head, *cur = head->next;
	set.insert(head->value);
	while(cur != NULL)
	{
		if(set.find(cur->value) != set.end())
			pre->next = cur->next;
		else
		{
			set.insert(cur->value);
			pre = cur;
		}
		cur = cur->next;
	}
}


void removeReq2(Node *head)
{
	Node *cur = head, *pre = NULL,  *next = NULL;
	while(cur != NULL)
	{
		pre = cur;
		next = cur->next;
		while(next != NULL)
		{
			if(cur->value == next->value)
				pre->next = next->next;
			else
				pre = next;
			next = next->next;
		}
		cur = cur->next;
	}
}


int main(void)
{
	Node *head = inputlist();
	removeReq1(head);
	printlinkedlist(head);

	return 0;
}

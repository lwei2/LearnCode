/*************************************************************************
    > File Name: Pro0139_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Node
{
	public:
		int value;
		Node *next;
		~Node()
		{

		}
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
		if(i == 0)
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

Node *getSmallPreNode(Node *head)
{
	Node *smallPre = NULL;
	Node *small = head;
	Node *pre = head;
	Node *cur = head->next;
	while(cur != NULL)
	{
		if(cur->value < small->value)
		{
			smallPre = pre;
			small = cur;
		}
		pre = cur;
		cur = cur->next;
	}
	return smallPre;
}

Node *selectSort(Node *head)
{
	Node *tail = NULL;
	Node *cur = head;
	Node *smallPre = NULL;
	Node *small = NULL;

	while(cur != NULL)
	{
		small = cur;
		smallPre = getSmallPreNode(cur);
		if(smallPre != NULL)
		{
			small = smallPre->next;
			smallPre->next = small->next;
		}
		cur = cur == small ? cur->next : cur;
		if(tail  == NULL)
			head = small;
		else
			tail->next = small;
		tail = small;
	}
	return head;
}

int main(void)
{
	Node *head = inputlist();
	Node *res = selectSort(head);
	printlinkedlist(res);
	return 0;
}

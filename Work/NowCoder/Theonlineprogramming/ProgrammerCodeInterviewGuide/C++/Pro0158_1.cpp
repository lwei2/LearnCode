/*************************************************************************
    > File Name: Pro0158_1.cpp
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
	int n,value;
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
	cur->next = head;
	return head;
}

void printlinkedlist(Node *node)
{
	cout<<node->value<<" ";
	Node *cur = node->next;
	while(cur != node)
	{
		cout<<cur->value<<" ";
		cur = cur->next;
	}
	cout<<endl;
}

Node *insetNum(Node *head, int num)
{
	Node *node = new Node();
	node->value = num;
	if(NULL == head)
	{
		node->next = node;
		return node;
	}
	Node *pre = head, *cur = head->next;
	while(cur != head)
	{
		if(pre->value <= num && cur->value > num)
			break;
		pre = cur;
		cur = cur->next;
	}
	pre->next = node;
	node->next = cur;
	return head->value < num ? head : node;
}
int main(void)
{
	int num;
	Node *head = inputlist();
	cin>>num;
	Node *res = insetNum(head, num);
	printlinkedlist(res);
	return 0;
}

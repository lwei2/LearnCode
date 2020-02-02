/*************************************************************************
    > File Name: Pro0114_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

struct Node
{
	public:
		Node(int data):data_(data)
		{

		}
	public:
		Node *next_;
		int data_;
};

Node *getList(int n)
{
	int num;
	Node *head, **tmp;
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&num);
		Node *node = new Node(num);
		node->next_ = nullptr;
		if(0 == i)
		{
			head = node;
			tmp = &node->next_;
		}
		else
		{
			*tmp = node;
			tmp = &node->next_;
		}
	}
	return head;
}

Node *reverseList(Node *head)
{
	Node *pre = nullptr, *next = nullptr;
	while(head)
	{
		next = head->next_;
		head->next_ = pre;
		pre = head;
		head = next;
	}
	return pre;
}

int main(void)
{
	int n,m;
	scanf("%d%d",&n,&m);
	Node *head1 = getList(n);
	Node *head2 = getList(m);
	Node *newHead = nullptr, *newTail = nullptr;
	head1 = reverseList(head1);
	head2 = reverseList(head2);

	int sum, k = 0;
	while(head1 && head2)
	{
		sum = head1->data_ + head2->data_ + k;
		k = sum/10;
		sum%=10;
		Node *tmp = new Node(sum);
		tmp->next_ = nullptr;
		if(newHead == nullptr)
		{
			newHead = tmp;
			newTail = tmp;
		}
		else
		{
			newTail->next_ = tmp;
			newTail = tmp;
		}
		head1 = head1->next_;
		head2 = head2->next_;
	}
	while(head1)
	{
		sum = head1->data_ + k;
		k = sum/10;
		sum%=10;
		Node *tmp = new Node(sum);
		tmp->next_ = nullptr;
		newTail->next_ = tmp;
		newTail = tmp;
		head1 = head1->next_;
	}
	while(head2)
	{
		sum = head2->data_ + k;
		k = sum/10;
		sum%=10;
		Node *tmp = new Node(sum);
		tmp->next_ = nullptr;
		newTail->next_ = tmp;
		newTail = tmp;
		head2 = head2->next_;
	}
	if(k > 0)
	{
		Node *tmp = new Node(k);
		tmp->next_ = nullptr;
		newTail->next_ = tmp;
		newTail = tmp;
	}
	newHead = reverseList(newHead);
	while(newHead)
	{
		cout<<newHead->data_<<" ";
		newHead = newHead->next_;
	}
	cout<<endl;
	return 0;
}

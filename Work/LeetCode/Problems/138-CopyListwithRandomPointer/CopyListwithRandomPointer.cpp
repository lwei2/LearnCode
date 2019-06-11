/*************************************************************************
    > File Name: CopyListwithRandomPointer.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Node 
{
	public:
		int val;
		Node *next;
		Node *random;
		Node()
		{

		}
		Node(int _val, Node *_next, Node *_random)
		{
			val = _val;
			next = _next;
			random = _random;
		}
};

class Solution
{
	public:
		Node *copyRandomList(Node *head)
		{
			if(NULL == head)
				return NULL;
			Node newHead(0), *p = head, *t = NULL;
			while(p)
			{
				Node *cloned = new Node(p->val);
				cloned->random = p->random;
				cloned->next = p->next;
				p->next = cloned;
				p = cloned->next;
			}
			p = head;
			while(p && p->next)
			{
				if(p->random)
					p->next->random = p->random->next;
				p = p->next->next;
			}
			p = head;
			t = &newHead;
			while(p && p->next)
			{
				t->next = p->next;
				p->next = p->next->next;
				t = t->next;
				p = p->next;
			}
			t->next = NULL;
			return newHead.next;
		}
};


int main(void)
{
	return 0;
}

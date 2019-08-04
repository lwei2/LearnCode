/*************************************************************************
    > File Name: DeleteNodeinaLinkedList.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};

class Solution
{
	public:
		void deleteNode1(ListNode *node)
		{
			node->val = node->next->val;
			node->next = node->next->next;
		}

	public:
		void deleteNode2(ListNode *node)
		{
			ListNode *tmp = node->next;
			node->val = tmp->val;
			node->next = tmp->next;
			delete tmp;
		}

	public:
		void deleteNode3(ListNode *node)
		{
			*node = *(node->next);
		}
};


int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: RemoveDulicatesfromSortedListII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
	Example 1:
		Input: 1->2->3->3->4->4->5
		Output: 1->2->5
	Example 2:
		Input: 1->1->1->2->3
		Output: 2->3
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
		ListNode* deleteDuplicates(ListNode* head)
		{
			ListNode* dummy = new ListNode(-1);
			dummy->next = head;
			ListNode* t = dummy, *p = head;
			while(nullptr != p)
			{
				while(p->next != nullptr && p->val == p->next->val)
					p = p->next;
				if(t->next != p)
					t->next = p->next;
				else
					t = t->next;
				p = p->next;
			}
			return dummy->next;
		}
};

int main(void)
{
	return 0;
}

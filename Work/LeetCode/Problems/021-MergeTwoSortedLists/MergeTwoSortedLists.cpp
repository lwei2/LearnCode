/*************************************************************************
    > File Name: MergeTwoSortedLists.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 
 ************************************************************************/



/*
Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
*/

#ifndef __METHOD1
class Solution 
{
	public:
	  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
	  {
			ListNode dummy(0);
			ListNode *ptr = &dummy;
			int v1 = 0,v2 = 0;
			while(l1||l2)
			{
				v1 = l1 ? l1->val:INT_MAX;
				v2 = l2 ? l2->val:INT_MAX;
				if(v1 <= v2)
				{
					ptr->next = new ListNode(l1->val);
					ptr = ptr->next;
					l1 = l1 ? l1->next:nullptr;
					continue;
				}
				else
				{
					ptr->next = new ListNode(l2->val);
					ptr = ptr->next;
					l2 = l2 ? l2->next:nullptr;
					continue;
				}
			}
			return dummy.next;
	  }
};

#endif





/*************************************************************************
    > File Name: ReverseLinkedListII.cpp
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
		ListNode* reverseBetween(ListNode* head, int m, int n)
		{
			if(n <= m)
				return head;
			ListNode newHead(-1);
			newHead.next = head;
			ListNode *pre = &newHead;

			int index = 1;
			while(pre && index < m)
			{
				pre = pre->next;
				++index;
			}
			ListNode *cur = nullptr;
			if(pre->next)
				cur = pre->next;
			pre->next = nullptr;
			ListNode *next = nullptr;
			ListNode *tmp = cur;
			int count = n - m + 1;
			while(cur && count--)
			{
				next = cur->next;
				cur->next = pre->next;
				pre->next = cur;
				cur = next;
			}
			tmp->next = cur;
			return newHead.next;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: PalindromeLinkedList.cpp
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
	ListNode(int x):val(x), next(NULL)
	{

	}
};

class Solution
{
	public:
		bool isPalindrome(ListNode *head)
		{
			if(!head || !head->next)
				return true;
			ListNode *slow(head), *fast(head);
			while(fast && fast->next)
			{
				slow = slow->next;
				fast = fast->next->next;
			}
			if(fast)
			{
				slow = slow->next;
			}
			ListNode *curr(slow), *prev = NULL, *tmp;
			while(curr != NULL)
			{
				tmp = curr->next;
				curr->next = prev;
				prev = curr;
				curr = tmp;
			}
			while(prev != NULL)
			{
				if(prev->val != head->val)
					return false;
				prev = prev->next;
				head = head->next;
			}
			return true;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: Pro1015.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入两个单调递增的链表，输出两个链表合成后的链表，当然我们需要合成后的链表满足单调不减规则。
 ************************************************************************/

#include<iostream>

using namespace std;
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};
class Solution
{
	public:
		ListNode *Merge(ListNode *ppHead1, ListNode* pHead2)
		{
			if(pHead1 == NULL)
				return pHead2;
			if(pHead2 == NULL)
				return pHead1;
			ListNode *newhead = NULL;
			if(pHead1->val < pHead2->val)
			{
				newhead = pHead1;
				newhead->next = Merge(pHead1->next, pHead2);
			}
			else
			{
				newhead = pHead2;
				newhead->next = Merge(pHead1, pHead2->next);
			}
			return newhead;
		}
}

int main(void)
{
	return 0;
}

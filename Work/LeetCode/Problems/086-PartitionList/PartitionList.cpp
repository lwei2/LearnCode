/*************************************************************************
    > File Name: PartitionList.cpp
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
		ListNode* partition2(ListNode *head, int x)
		{
			ListNode* l = new ListNode(0);
			ListNode* r = new ListNode(0);
			ListNode* left = l, *right = r;
			while(head)
			{
				if(head->val < x)
				{
					l->next = head;
					l = head;
				}
				else
				{
					r->next = head;
					r = head;
				}
				head = head->next;
			}
			r->next = NULL;
			l->next = right->next;
			return left->next;
		}
		ListNode* partition2(ListNode *head, int x)
		{
			if(!head)
				return head;
			ListNode* cur = head;
			ListNode* pre = nullptr, *tail_pre;
			ListNode* beh = nullptr, *tail_beh;
			while(cur)
			{
				ListNode* tmp = cur;
				cur = cur->next;
				if(tmp->val < x)
				{
					if(pre == nullptr)
					{
						pre = tmp;
						tail_pre = tmp;
						tail_pre->next = nullptr;
					}
					else
					{
						tail_pre->next = tmp;
						tail_pre = tail_pre->next;
						tail_pre->next = nullptr;
					}
				}
				else
				{
					if(beh == nullptr)
					{
						beh = tmp;
						tail_beh = tmp;
						tail_beh->next = nullptr;
					}
					else
					{
						tail_beh->next = tmp;
						tail_beh = tail_beh->next;
						tail_beh->next = nullptr;
					}
				}
			}
			if(!pre)
				return beh;
			tail_pre->next = beh;
			return pre;
		}

};

int main(void)
{
	return 0;
}

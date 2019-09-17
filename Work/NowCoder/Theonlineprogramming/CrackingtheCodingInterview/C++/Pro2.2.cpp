/*************************************************************************
    > File Name: Pro2.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个链表，输出该链表中倒数第k个结点。
 ************************************************************************/


#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	struct ListNode  *next;
	ListNode(int x):val(x), next(NULL)
	{

	}
};

class Solution
{
	public:
		ListNode *FindKthToTail1(ListNode *pListHead, unsigned int k)
		{
			auto *p = pListHead;
			for(int i = 0; i != k; i++)
				if(!p)
					return nullptr;
				else
					p = p->next;
			while(p)
			{
				p = p->next;
				pListHead = pListHead->next;
			}
			return pListHead;
		}

	public:
		ListNode *FindKthToTail2(ListNode *pListHead, unsigned int k)
		{
			ListNode *p, *q;
			p = q = pListHead;
			int i = 0;
			for(; p != nullptr; i++)
			{
				if(i >= k)
					q = q->next;
				p = p->next;
			}
			return i < k ? nullptr : q;
		}
};


int main(void)
{
	return 0;
}

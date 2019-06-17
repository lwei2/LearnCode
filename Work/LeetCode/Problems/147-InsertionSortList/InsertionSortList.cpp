/*************************************************************************
    > File Name: InsertionSortList.cpp
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
	ListNode(int x) : val(x), next(NULL)
	{

	}
};

class Solution
{
	public:
		ListNode *InsertionSortList1(ListNode *head)
		{
			if(NULL == head)
				return head;
			ListNode *p = head;
			ListNode *q = head;
			ListNode *k = q;
			while(p->next!=NULL)
			{
				if(p->val < p->next->val)
				{
					p = p->next;
					continue;
				}
				if(p->next->val < q->val)
				{
					ListNode *tmp = p->next;
					p->next = tmp->next;
					tmp->next = q;
					if(q == head)
						head = tmp;
					else
						k->next = tmp;
					q = head;
				}
				else
				{
					if(q == p)
					{
						p = p->next;
						continue;
					}
					else
					{
						k = q;
						q = q->next;
					}
				}
			}
			return head;
		}

	public:
		ListNode *InsertionSortList2(ListNode *head)
		{
			ListNode *dummy = new ListNode(0);
			if(head != NULL)
			{
				ListNode *cur = dummy;
				ListNode *next = head->next;
				while(cur->next != NULL && cur->next->val < head->val)
					cur = cur->next;
				head->next = cur->next;
				cur->next = head;
				head = next;
			}
			return dummy->next;
		}
	public:
		ListNode *insertionSortList3(ListNode *head)
		{
			if(NULL == head || NULL == head->next)
				return head;
			ListNode first(0);
			first.next = head;
			ListNode *cur = head;
			ListNode *pre = NULL;
			while(cur)
			{
				if(cur->next && cur->next->val < cur->val)
				{
					pre = &first;
					while(cur->next && pre->next && cur->next->val > pre->next->val)
					{
						pre = pre->next;
					}
					ListNode *temp = cur->next;
					cur->next = temp->next;
					temp->next = pre->next;
					pre->next = temp;
				}
				else
					cur = cur->next;
			}
			return first.next;
		}

	public:
		ListNode *insertionSortList4(ListNode *head)
		{
			if(NULL == head || NULL == head->next)
				return head;
			ListNode *dummy = new ListNode(-1);
			dummy->next = head;
			ListNode *pre = head;
			ListNode *cur = head->next;

			while(cur)
			{
				if(pre->val > cur->val)
				{
					ListNode *tmp = dummy;
					while(tmp->next->val < cur->val)
						tmp = tmp->next;
					pre->next = cur->next;
					cur->next = tmp->next;
					tmp->next = cur;
				}
				else
					pre = pre->next;
				cur = pre->next;
			}
			return dummy->next;
		}

	public:
		ListNode *insertionSortList5(ListNode *head)
		{
			ListNode *dummy = new ListNode(0);
			ListNode *p = dummy, *q = head;
			while(q!=NULL)
			{
				while(p->next!=NULL && p->next->val <= q->val)
					p = p->next;
				ListNode *t = q->next;
				q->next = p->next;
				p->next = q;
				q = t;
				p = dummy;
			}
			return dummy->next;
		}

	public:
		static bool cmp(const ListNode *a, const ListNode *b)
		{
			return a->val < b->val;
		}
		ListNode *insertionSortList6(ListNode *head)
		{
			if(nullptr == head || nullptr == head->next)
				return head;
			vector<ListNode *> res;
			ListNode *p = head;
			while(p!=nullptr)
			{
				res.push_back(p);
				p = p->next;	
			}
			sort(res.begin(), res.end(), cmp);
			p = res[0];
			head = p;
			for(int i = 1; i < res.size(); i++)
			{
				p->next = res[i];
				p = p->next;
			}
			p->next = NULL;
			return head;
		}

	public:
		ListNode *insertionSortList7(ListNode *head)
		{
			ListNode *dummy = new ListNode(INT_MIN);
			dummy->next = head;
			ListNode *p = dummy->next;
			ListNode *pre = dummy;
			ListNode *cur = p;
			if(!cur)
				return NULL;
			while(cur && cur->next)
			{
				if(cur->val > cur->next->val)
				{
					ListNode *tmp = cur->next;
					cur->next = cur->next->next;
					tmp->next = NULL;
					p = dummy->next;
					pre = dummy;
					while(p->val < tmp->val)
					{
						pre = p;
						p = p->next;
					}
					pre->next = tmp;
					tmp->next = p;
				}
				else
					cur = cur->next;
			}
			return dummy->next;
		}
};


int main(void)
{
	return 0;
}

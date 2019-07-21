/*************************************************************************
    > File Name: RemoveLinkedListElements.cpp
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
		ListNode *removeElements(ListNode *head, int val)
		{
			if(NULL == head)
				return NULL;
			ListNode **p = &head, *del;
			while(*p)
			{
				if((*p)->val == val)
				{
					del = *p;
					*p = del->next;
					delete del;
				}
				else
					p = &(*p)->next;
			}
			return head;
		}
};

int main(void)
{
	return 0;
}

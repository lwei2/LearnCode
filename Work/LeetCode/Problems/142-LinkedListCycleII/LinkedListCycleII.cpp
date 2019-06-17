/*************************************************************************
    > File Name: LinkedListCycleII.cpp
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
		ListNode *detectCycle(ListNode *head)
		{
			if(head == nullptr || head->next == nullptr)
				return nullptr;
			auto slow = head;
			auto fast = head;
			while(fast != nullptr && fast->next != nullptr)
			{
				slow = slow->next;
				fast = fast->next->next;
				if(slow == fast)
					break;
			}
			if(slow != fast)
				return nullptr;
			fast = head;
			while(fast != slow)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return fast;
		}
};
int main(void)
{
	return 0;
}

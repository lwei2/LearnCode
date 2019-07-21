/*************************************************************************
    > File Name: ReverseLinkedList.cpp
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
		ListNode *reverseList(ListNode *head)
		{
			ListNode *curr = head;
			ListNode *prev = nullptr;
			while(curr != nullptr)
			{

				ListNode *actualNext = curr->next;
				curr->next = prev;
				prev = curr;
				curr = actualNext;
			}
			retunr prev;
		}
};
int main(void)
{
	return 0;
}

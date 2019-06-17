/*************************************************************************
    > File Name: ReorderList.cpp
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
		void reorderList(ListNode *head)
		{
			stack<ListNode *>backward;
			ListNode *cur = head;
			int node_count = 0;
			if(nullptr == head)
				return ;
			while(cur != nullptr)
			{
				node_count++;
				backward.push(cur);
				cur = cur->next;
			}
			cur = head;
			for(int i = 0; i < node_count/2; i++)
			{
				ListNode *next = cur->next;
				cur->next = backward.top();
				backward.top()->next = next;
				backward.pop();
				cur = next;
			}
			cur->next = nullptr;
		}
};
int main(void)
{
	return 0;
}

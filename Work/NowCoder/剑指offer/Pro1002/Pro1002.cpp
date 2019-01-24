/*************************************************************************
    > File Name: Pro1002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	输入一个链表，按链表值从尾到头的顺序返回一个ArrayList。
 ************************************************************************/

#include<iostream>

using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};
class Solution
{
	public:
		vector<int> printListFromTailToHead(ListNode *head)
		{
			stack<int>nodes;
			vector<int>ArrayList;
			ListNode　*p = head;
			while(head!=NULL)
			{
				nodes.push(head->val);
				head = head->next;
			}
			while(!nodes.empty())
			{
				ArrayList.push_back(nodes.top());
				nodes.pop();
			}
			return ArrayList;
		}
};

int main(void)
{
	return 0;
}

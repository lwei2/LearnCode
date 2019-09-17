/*************************************************************************
    > File Name: Pro2.7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请编写一个函数，检查链表是否为回文。给定一个链表ListNode* pHead，请返回一个bool，代表链表是否为回文。
测试样例：
{1,2,3,2,1}
返回：true
{1,2,3,2,3}
返回：false
 ************************************************************************/


#include <iostream>

using namespace std;

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};

class Palindrome
{
	public:
		bool isPalindrome1(ListNode *pHead)
		{
			if(pHead == NULL)
				return true;
			stack<int> s;
			ListNode *p = pHead;
			ListNode *q = pHead;
			s.push(p->val);
			while(q->next != NULL && q->next->next != NULL)
			{
				p = p->next;
				s.push(p->val);
				q = q->next->next;
			}
			if(q->next == NULL)
				s.pop();
			p = p->next;
			while(!s.empty())
			{
				if(s.top()!=p->val)
					break;
				p = p->next;
				s.pop();
			}
			if(s.empty())
				return true;
			else
				return false;
		}
};

int main(void)
{
	return 0;
}

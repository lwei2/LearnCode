/*************************************************************************
    > File Name: Pro1013.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一个链表，输出该链表中倒数第k个结点。
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
		ListNode* FindKthToTail(ListNode *pListHead, unsigned int k)
		{
			auto k = pListHead;
			for(int i = 0; i!=k; ++i)
				i(!t)
					return nullptr;
				else
					t = t->next;
			while(t)
			{
				t = t->next;
				pListHead = pListHead->next;
			}
			return pListHead;
		}
}
int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: Pro2.3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :实现一个算法，删除单向链表中间的某个结点，假定你只能访问该结点。
给定待删除的节点，请执行删除操作，若该节点为尾节点，返回false，否则返回true
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

class Remove
{
	public:
		bool removeNode1(ListNode *pNode)
		{
			if(pNode == NULL || pNode->next == NULL)
			{
				delete pNode;
				return false;
			}
			ListNode *tmp;
			tmp = pNode->next;
			//pNode->val = tmp->val;
			pNode->next = tmp->next;
			delete tmp;
			return true;
		}
};

int main(void)
{
	return 0;
}

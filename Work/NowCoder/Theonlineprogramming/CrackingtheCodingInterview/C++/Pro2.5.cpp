/*************************************************************************
    > File Name: Pro2.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :有两个用链表表示的整数，每个结点包含一个数位。这些数位是反向存放的，也就是个位排在链表的首部。编写函数对这两个整数求和，并用链表形式返回结果。
给定两个链表ListNode* A，ListNode* B，请返回A+B的结果(ListNode*)。
测试样例：
{1,2,3},{3,2,1}
返回：{4,4,4}
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

class Plus
{
	public:
		LIstNode *plusAB1(ListNode *a, ListNode *b)
		{
			if(a == NULL && b == NULL)
				return NULL;
			int flag = 0;
			int sum = 0;
			int val_new = 0;
			ListNode *pHead = new ListNode(0);
			ListNode *node = pHead;
			while(a != NULL || b != NULL || flag != 0)
			{
				int val_a = a!=NULL?a->val:0;
				int val_b = b!=NULL?b->val:0;
				sum = val_a + val_b + flag;
				val_new = sum%10;
				flag = sum/10;
				ListNode *newNode = new ListNode(val_new);
				node->next = newNode;
				node = node->next;
				a = (a == NULL) ? NULL : a->next;
				b = (b == NULL) ? NULL : b->next;
			}
			return pHead->next;
		}
};


int main(void)
{
	return 0;
}

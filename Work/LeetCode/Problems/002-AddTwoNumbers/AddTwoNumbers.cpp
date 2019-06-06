/*************************************************************************
    > File Name: AddTwoNumbers.cpp
    > Author: lwei
    > Mail: root@163.com 
    > Created Time: 2018年01月16日 星期二 08时06分15秒
 ************************************************************************/

#include<iostream>

using namespace std;
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){

	}
};
class Solution
{
	public:
		ListNode *addTwoNumbers(ListNode *l1,ListNode *l2)
		{
			ListNode *head=new ListNode(0);
			ListNode *result=head;
			int mask=makeSum(l1,l2,result);
			ListNode *longer=l1?l1:l2;
			while(longer)
			{
				int val=longer->val+mask;
				mask=val/10;
				ListNode *p=new ListNode(val%10);
				result->next=p;
				result=result->next;
				longer=longer->next;
			}
			if(mask)
				result->next=new ListNode(mask);
			ListNode *ret=head->next;
			delete head;
			return ret;
		}
		int makeSum(ListNode * &l1,ListNode * &l2,ListNode * &result)
		{
			int mask=0;
			while(l1&&l2)
			{
				int val=l1->val+l2->val+mask;
				mask=val/10;
				ListNode *p=new ListNode(val%10);
				result->next=p;
				result=result->next;
				l1=l1->next;
				l2=l2->next;
				
			}
			return mask;
		}
}

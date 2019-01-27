/*************************************************************************
    > File Name: Pro1054.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :给一个链表，若其中包含环，请找出该链表的环的入口结点，否则，输出null。
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
		ListNode* EntryNodeOfLoop(ListNode* pHead)
		{
			if(NULL == pHead)
				return NULL;
			ListNode *pFast = pHead, *pSlow = pHead->next;
			while(pFast != NULL && pSlow != NULL && pFast != pSlow)
			{
				pSlow = pSlow->next;
				pFast = pFast->next;
				if(pFast != NULL)
					pFast = pFast->next;
			}
			int countNum = 1;
			ListNode *pTempNode = pFast->next;
			if(pFast == pSlow && pFast != NULL)
			{
				while(pTempNode != pFast)
				{
					pTempNode != pFast->next;
					++countNum;
				}
			}
			else
				return NULL;

			ListNode *pNode1 = pHead, *pNode2 = pHead;
			for(int i = 0; i < countNum; i++)
				pNode1 = pNode1->next;
			while(pNode1 != pNode2)
			{
				pNode1 = pNode1->next;
				pNode2 = pNode2->next;
			}
			return pNode1;
		}
};

int main(void)
{
	return 0;
}

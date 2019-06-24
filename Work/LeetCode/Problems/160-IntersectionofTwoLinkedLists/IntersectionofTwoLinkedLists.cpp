/*************************************************************************
    > File Name: IntersectionofTwoLinkedLists.cpp
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
	ListNode(int x) : val(x), next(NULL)
	{

	}
};
class Solution
{
	public:
		ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
		{
			ListNode *pA = headA;
			ListNode *pB = headB;
			bool swapA = false;
			bool swapB = false;
			if(!pA || !pB)
				return nullptr;
			while(pA && pB && pA != pB)
			{
				pA = pA->next;
				pB = pB->next;
				if(!pA && !swapA)
				{
					pA = headB;
					swapA = true;
				}
				if(!pB && !swapB)
				{
					pB = headA;
					swapB = true;
				}
			}
			return pA;
		}
};

int main(void)
{
	return 0;
}

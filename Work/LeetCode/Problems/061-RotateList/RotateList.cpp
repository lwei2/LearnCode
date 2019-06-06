/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
		if(!head)
			return NULL;
		int n = 1;
		ListNode *cur = head;
		ListNode *res = head;
		while(cur->next)
		{
			n++;
			cur = cur->next;
		}
		cur->next = head;
		k = k % n;
		while((n-k) > 0)
		{
			k++;
			res = res->next;
		}
		cur = res;
		while(cur->next!=res)
		{
			cur = cur->next;
		}
		cur->next = NULL;
		return res;
    }
};

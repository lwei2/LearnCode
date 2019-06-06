
/*

   Definition for singly-linked list.
   struct ListNode
   {
		int val;
		ListNode *next;
		ListNode(int x):val(x), next(NULL){}
   };

*/


class Solution
{
	public:
		ListNode* deleteDuplicates(ListNode* head)
		{
			if(!head)
				return nullptr;
			if(!head->next)
				return head;
			ListNode* prev;
			ListNode* finger = head;
			while(finger->next)
			{
				prev = finger;
				finger = finger->next;
				int latesVal = val;
				if(val == latesVal && finger->next)
				{
					finger = finger->next;
					prev->next = finger;
					finger = prev;
				}
				else if(val ==latesVal && !finger->next)
				{
					prev->next = nullptr;
				}
				val = finger->val;

			}
			return head;
		}
}

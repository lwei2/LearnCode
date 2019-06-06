/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
    public:
        ListNode* mergeKLists(vector<ListNode*>& lists)
        {
            priority_queue<int> q;
            for(ListNode* l:lists)
            {
                while(l)
                {
                    int val = l->val;
                    q.push(-val);
                    l=l->next;
                }
            }
            ListNode* dummy = new ListNode(0);
            ListNode* tail = dummy;
            while(!q.empty())
            {
                int neg_val=q.top();
                q.pop();
                tail->next = new ListNode(-neg_val);
                tail=tail->next;
            }
            return dummy->next;
        }
}

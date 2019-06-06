/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#ifdef  method1
class Solution
{
public:
	ListNode* removeNthFromEnd(ListNode* head,int n)
	{
		vector<ListNode*> temp;
		ListNode* node = head;
		while(node!=NULL)
		{
			temp.push_back(node);
			node=node->next;
		}
		if(temp.size() - n ==0)
		{
			head = head->next;
			return head;
		}
		node = temp[temp.size() - n - 1];
		node->next=node->next->next;
		return head;
	}
}
#elif
class Solution
{
public:
	int remove(ListNode* head, int n)
	{
		if(head == NULL)
			return 0;
		int count = 1 + remove(head->next, n);
		if(count == (n + 1))
		{
			ListNode* next = head->next;
			head->next = next->next;
			delete next;
		}
		return count;
	}
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		ListNode* start = new ListNode(0);
		start->next = head;
		remove(start, n);
		ListNode* curr = start->next;
		delete start;
		return curr;
	}
}
#elif
struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
	struct ListNode *fast, *slow;
	for(fast = head; fast&& fast->next&&n>0;fast = fast->next,--n);
		for(slow=head;fast&& fast->next;fast= fast->next,slow=slow->next);
			if(slow&&n==0)
				slow->next = slow->next->next;
	return n==1?head->next:head;
}
#elif
static int x = [](){std::ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);return 0;}();
class Solution
{
	ListNode* removeNthFromEnd(ListNode* head, int n)
	{
		ListNode dummy(-1);
		dummy.next = head;
		ListNode* forerunner = &dummy;
		ListNode* follower = &dummy;
		for(int i = 0; i <= n; ++i)
			forerunner = forerunner->next;
		while(forerunner)
		{
			forerunner=forerunner->next;
			follower = follower->next;
		}
		follower->next = follower->next->next;
		return dummy.next;
	}
}
//3page
#else

#endif
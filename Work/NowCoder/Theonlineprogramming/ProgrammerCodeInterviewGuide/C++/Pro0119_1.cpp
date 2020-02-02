/*************************************************************************
    > File Name: Pro0119_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <stack>

using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
	ListNode(int value):value(value),next(nullptr)
	{

	}
};

int main(void)
{
	int n;
	cin>>n;
	ListNode L(-1);
	ListNode *head = &L;
	for(int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		ListNode *newnode = new ListNode(x);
		head->next = newnode;
		head = newnode;
	}
	head = L.next;
	int k;
	cin>>k;
	stack<ListNode*> st;
	ListNode *newhead = &L;
	while(head != nullptr)
	{
		if(st.size() == k)
		{
			while(!st.empty())
			{
				ListNode *tmp = st.top();
				tmp->next = nullptr;
				newhead->next = tmp;
				newhead = tmp;
				st.pop();
			}
		}
		st.push(head);
		head = head->next;
	}
	if(st.size() == k)
	{
		while(!st.empty())
		{
			ListNode *tmp = st.top();
			tmp->next = nullptr;
			newhead->next = tmp;
			newhead = tmp;
			st.pop();
		}
	}
	else if(st.size() < k)
	{
		stack<ListNode *> stmp;
		while(!st.empty())
		{
			stmp.push(st.top());
			st.pop();
		}
		while(!stmp.empty())
		{
			ListNode *node = stmp.top();
			node->next = nullptr;
			newhead->next = node;
			newhead = node;
			stmp.pop();
		}
	}
	newhead = L.next;
	while(newhead != nullptr)
	{
		cout<<newhead->value<<" ";
		newhead = newhead->next;
	}
	cout<<endl;
	return 0;
}

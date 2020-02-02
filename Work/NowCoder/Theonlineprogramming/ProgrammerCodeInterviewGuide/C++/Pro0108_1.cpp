/*************************************************************************
    > File Name: Pro0108_1.cpp
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

	int l,r;
	cin>>l>>r;
	if(l < 1 || l > n || r < 1 || r > n)
	{
		head = L.next;
		while(head != nullptr)
			cout<<head->value<<" ";
		cout<<endl;
	}
	else
	{
		int index = -1;
		head = &L;
		stack<ListNode *>st;
		ListNode *preStart, *nextStart;
		while(head != nullptr)
		{
			index++;
			if(index == l - 1)
				preStart = head;
			if(index == r + 1)
				nextStart = head;
			else if(index >= l && index <= r)
				st.push(head);
			head = head->next;
		}
		while(!st.empty())
		{
			auto top = st.top();
			st.pop();
			preStart->next = top;
			preStart = top;
		}
		preStart->next = nextStart;
		head = L.next;
		while(head != nullptr)
		{
			cout<<head->value<<" ";
			head = head->next;
		}
		cout<<endl;
	}
	return 0;
}

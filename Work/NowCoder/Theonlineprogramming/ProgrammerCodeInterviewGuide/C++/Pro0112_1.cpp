/*************************************************************************
    > File Name: Pro0112_1.cpp
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

bool isHW(ListNode *head)
{
	ListNode *cur = head;
	stack<ListNode*> st;
	while(cur != nullptr)
	{
		st.push(cur);
		cur = cur->next;
	}
	while(head != nullptr)
	{
		if(head->value != st.top()->value)
			return false;
		st.pop();
		head = head->next;
	}
	return true;
}

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
	if(isHW(head))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}

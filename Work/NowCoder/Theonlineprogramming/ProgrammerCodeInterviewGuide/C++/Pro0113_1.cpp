/*************************************************************************
    > File Name: Pro0113_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

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
	int n,pivot;
	cin>>n>>pivot;
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
	ListNode *sh = nullptr, *st = nullptr;
	ListNode *eh = nullptr, *et = nullptr;
	ListNode *bh = nullptr, *bt = nullptr;
	ListNode *next = nullptr;
	while(head != nullptr)
	{
		next = head->next;
		head->next = nullptr;
		if(head->value < pivot)
		{
			if(sh == nullptr)
			{
				sh = head;
				st = head;
			}
			else
			{
				st->next = head;
				st = head;
			}
		}
		else if(head->value == pivot)
		{
			if(eh == nullptr)
			{
				eh = head;
				et = head;
			}
			else
			{
				et->next = head;
				et = head;
			}
		}
		else
		{
			if(bh == nullptr)
			{
				bh = head;
				bt = head;
			}
			else
			{
				bt->next = head;
				bt = head;
			}
		}
		head = next;
	}
	if(st != nullptr)
	{
		st->next = eh;
		et = (et == nullptr) ? st : et;
	}
	if(et != nullptr)
		et->next = bh;
	head = sh != nullptr ? sh : eh != nullptr ? eh : bh;
	while(head != nullptr)
	{
		cout<<head->value<<" ";
		head = head->next;
	}
	cout<<endl;
	return 0;
}

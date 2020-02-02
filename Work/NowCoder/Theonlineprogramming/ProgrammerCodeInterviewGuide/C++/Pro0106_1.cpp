/*************************************************************************
    > File Name: Pro0106_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <bits/stdc++.h>

using namespace std;


template<typename T>
class SinglyLinkedListNode
{
	public:
		T data;
		SinglyLinkedListNode *next;
		explicit SinglyLinkedListNode(T data) :data(data), next(nullptr)
		{

		}
};

template<typename T>
class SinglyLinkedList
{
	public:
		SinglyLinkedListNode<T> *head, *tail;
		SinglyLinkedList():head(nullptr),tail(nullptr)
		{

		}
		auto insert_node(const T &node_data)
		{
			auto node{new SinglyLinkedListNode<T>(node_data)};
			if(!head)
				head = node;
			else
				tail->next = node;
			tail = node;
		}
};

template<typename T>
auto print_singly_linked_list(SinglyLinkedListNode<T> *node, const string &sep)
{
	while(node)
	{
		cout<<node->data;
		node = node->next;
		if(node)
		{
			cout<<sep;
		}
	}
};

template<typename T>
auto free_singly_linked_list(SinglyLinkedListNode<T> *node)
{
	while(node)
	{
		auto temp{node};
		node = node->next;
		delete temp;
	}
}


template<typename T>
auto deleteNode(SinglyLinkedListNode<T> *head, size_t position, size_t length)
{
	if(length == 0 || position >= length)
		throw out_of_range("");
	auto currentNode(head);
	if(position == 0)
	{
		currentNode = head;
		head = currentNode->next;
		return head;
	}
	else if(position == length - 1)
	{
		currentNode = head;
		while(currentNode->next->next)
		{
			currentNode = currentNode->next;
		}
		currentNode->next = nullptr;
		return head;
	}
	else
	{
		currentNode = head;
		for(size_t i = 0; i != position - 1; ++i)
			currentNode = currentNode->next;
		auto temp{currentNode->next->next};
		currentNode->next = temp;
	}
	return head;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	auto linkedList{new SinglyLinkedList<int>()};
	
	int val;
	size_t length, position;
	cin>>length>>position;
	for(size_t i = 0; i != length; i++)
	{
		cin>>val;
		linkedList->insert_node(val);
	}
	auto newHead{deleteNode(linkedList->head, position-1,length)};
	print_singly_linked_list(newHead, " ");
	cout<<"\n";
	free_singly_linked_list(newHead);
	return 0;
}

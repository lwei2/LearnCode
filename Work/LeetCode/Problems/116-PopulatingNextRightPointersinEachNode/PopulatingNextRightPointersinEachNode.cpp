/*************************************************************************
    > File Name: PopulatingNextRightPointersinEachNode.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Node 
{
	public:
		int val;
		Node *left;
		Node *right;
		Node *next;
		Node()
		{

		}
		Node(int _val, Node *_left, Node *_right, Node *_next)
		{
			val = _val;
			left = _left;
			right = _right;
			next = _next;
		}
};

class Solution
{
	public:
		void traversal(Node *root, Node *p)
		{
			root->next = p;
			if(root->left)
			{
				traversal(root->left, root->right);
				traversal(root->right, p ? p->left:NULL);
			}
		}
		Node *connect1(Node *root)
		{
			if(root)
				traversal(root, NULL);
			return root;
		}

	public:
		Node *connect2(Node *root)
		{
			if(!root)
				return root;
			root->left = connect(root->left);
			root->right = connect(root->right);

			Node *t1 = root->left;
			Node *t2 = root->right;
			while(t1)
			{
				t1->next = t2;
				t1 = t1->right;
				t2 = t2->left;
			}
			return root;
		}

};
int main(void)
{
	return 0;
}

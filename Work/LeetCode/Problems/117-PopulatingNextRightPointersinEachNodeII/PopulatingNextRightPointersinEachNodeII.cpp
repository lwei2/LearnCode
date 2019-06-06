/*************************************************************************
    > File Name: PopulatingNextRightPointersinEachNodeII.cpp
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
		void dfs(Node *root, Node * &prev, int level, int target, bool &nflag)
		{
			if(!root)
				return;
			if(level == target)
			{
				if(prev)
					prev->next = root;
				prev = root;
				if(root->left || root->right)
					nflag = true;
				return;
			}
			dfs(root->left, prev, level + 1, target, nflag);
			dfs(root->right, prev, level + 1, target, nflag);
		}
		Node *connect(Node *root)
		{
			int i = 0; 
			bool nflag = true;
			while(nflag)
			{
				nflag = false;
				Node *prev = nullptr;
				dfs(root, prev, 0, i++, nflag);
			}
			return root;
		}
};
int main(void)
{
	return 0;
}

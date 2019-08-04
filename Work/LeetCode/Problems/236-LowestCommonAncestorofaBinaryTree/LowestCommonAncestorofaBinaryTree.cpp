/*************************************************************************
    > File Name: LowestCommonAncestorofaBinaryTree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL)
	{

	}
};

class Solution
{
	public:
		TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
		{
			if(root == p || root == q || root == nullptr)
				return root;
			TreeNode *a = lowestCommonAncestor(root->left, p, q);
			TreeNode *b = lowestCommonAncestor(root->right, p, q);
			if(a && b)
				return root;
			else if(!a)
				return b;
			else
				return a;
		}
};


int main(void)
{
	return 0;
}

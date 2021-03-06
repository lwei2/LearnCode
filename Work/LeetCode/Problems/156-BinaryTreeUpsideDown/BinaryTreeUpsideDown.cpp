/*************************************************************************
    > File Name: BinaryTreeUpsideDown.cpp
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
		TreeNode *upsideDownBinaryTree(TreeNode *root)
		{
			if(!root||!root->left)
				return root;
			TreeNode *p = upsideDownBinaryTree(root->left);
			root->left->left = root->right;
			root->left->right = root;
			root->left = NULL, root->right = NULL;
			return p;
		}
};

int main(void)
{
	return 0;
}

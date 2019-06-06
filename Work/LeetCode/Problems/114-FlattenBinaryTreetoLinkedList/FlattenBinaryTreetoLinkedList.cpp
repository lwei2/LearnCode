/*************************************************************************
    > File Name: FlattenBinaryTreetoLinkedList.cpp
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
		void flatten(TreeNode *root)
		{
			if(!root || (!root->left && !root->right))
				return;
			flatten(root->left);
			flatten(root->right);

			TreeNode *walk = root->left;
			if(!walk)
				return;
			while(walk->right)
				walk = walk->right;
			walk->right = root->right;
			root->right = root->left;
			root->left = NULL;
			return ;
		}
};


int main(void)
{
	return 0;
}

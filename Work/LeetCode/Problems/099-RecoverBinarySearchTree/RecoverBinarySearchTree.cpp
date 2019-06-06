/*************************************************************************
    > File Name: RecoverBinarySearchTree.cpp
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
	TreeNode(int x):val(x), left(NULL),right(NULL)
	{

	}
};

class Solution
{
	public:
		void recoverTree(TreeNode *root)
		{
			TreeNode *pre = NULL, *next = NULL, *cur = NULL;
			while(root!=NULL)
			{
				if(root->left == NULL)
				{
					if(cur != NULL && root->val < cur->val)
					{
						pre = (pre==NULL)?cur:pre;
						next = root;
					}
					cur = root;
					root = root->right;
					continue;
				}
				TreeNode *tmp = root->left;
				while(tmp->right != NULL && tmp->right != root)
				{
					tmp = tmp->right;
				}
				if(tmp->right == NULL)
				{
					tmp->right = root;
					root = root->left;
				}
				else
				{
					tmp->right = NULL;
					if(cur != NULL && root->val < cur->val)
					{
						pre = (pre == NULL) ? cur : pre;
						next = root;
					}
					cur = root;
					root = root->right;
				}
			}
			swap(pre->val, next->val);
		}
};

int main(void)
{
	return 0;
}

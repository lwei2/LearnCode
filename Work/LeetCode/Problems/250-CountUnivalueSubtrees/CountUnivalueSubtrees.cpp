/*************************************************************************
    > File Name: CountUnivalueSubtrees.cpp
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
		int countUnivalSubtrees(TreeNode* root)
		{
			int res = 0;
			isUnival(root, res);
			return res;
		}
	private:
		int isUnival(TreeNode *root, int &res)
		{
			if(root == NULL)
				return 0;
			else if(root->left == NULL && root->right == NULL)
			{
				res++;
				return 1;
			}
			int l = isUnival(root->left, res), r = isUnival(root->right, res);
			if(l == 1 && r == 1)
			{
				if(root->val == root->left->val && root->val == root->right->val)
				{
					res += 1;
					return 1;
				}
			}
			else if(l == -1 || r == -1)
				return -1;
			else if(l != 0 && root->val == root->left->val)
			{
				res += 1;
				return 1;
			}
			else if(r != 0 && root->val == root->right->val)
			{
				res += 1;
				return 1;
			}
			return -1;
		}


		bool isUnival(TreeNode *root, int &res)
		{
			if(root == NULL)
				return true;
			bool left = isUnival(root->left, res);
			bool right= isUnival(root->right, res);
			if(left & right)
			{
				if(root->left != NULL && root->val != root->left->val)
					return false;
				else if(root->right != NULL && root->val != root->right->val)
					return false;
				else
				{
					res++;
					return true;
				}
			}
			else
				return false;
		}
};

int main(void)
{
	return 0;
}

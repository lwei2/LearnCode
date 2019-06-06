/*************************************************************************
    > File Name: ValidateBinarySearchTree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <limits.h>
#include <stack>
#include <vector>

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
		bool traversal(TreeNode *root, long lower, long upper)
		{
			if(!root)
				return true;
			if(root->val >= upper || root->val <= lower)
				return false;
			return traversal(root->right, long(root->val),upper) && traversal(root->left, lower, long(root->val));
		}
		bool isValidBST1(TreeNode* root)
		{
			if(!root)
				return true;
			return traversal(root->right, root->val, long(LONG_MAX)) && traversal(root->left, LONG_MIN, long(root->val));
		}

	public:
		void inorder(TreeNode *root, vector<int> &vals)
		{
			if(!root)
				return;
			inorder(root->left, vals);
			vals.push_back(root->val);
			inorder(root->right, vals);
		}
		bool isValidBST2(TreeNode *root)
		{
			if(!root)
				return true;
			vector<int> vals;
			inorder(root, vals);
			for(int i = 0; i < vals.size() - 1; ++i)
				if(vals[i] >= vals[i+1])
					return false;
			return true;
		}

	public:
		bool isBST3(TreeNode *root, long mn, long mx)
		{
			if(!root)
				return true;
			if(root->val <= mn || root->val >= mx)
				return false;
			return isBST3(root->left, mn, root->val) && isBST3(root->right, root->val, mx);
		}
		bool isValidBST3(TreeNode *root)
		{
			return isBST3(root, LONG_MIN, LONG_MAX);
		}

	public:
		TreeNode *pre;
		void isBST4(TreeNode *root, int &res)
		{
			if(!root)
				return;
			isBST4(root->left, res);
			if(!pre)
				pre = root;
			else
			{
				if(root->val <= pre->val)
					res = 0;
				pre = root;
			}
			isBST4(root->right, res);
		}
		bool isValidBST4(TreeNode *root)
		{
			int res = 1;
			pre = NULL;
			isBST4(root, res);
			if(1 == res)
				return true;
			else
				return false;
		}

	public:
		bool isValidBST5(TreeNode *root)
		{
			stack<TreeNode *> s;
			TreeNode *p = root, *pre = NULL;
			while(p || !.s.empty())
			{
				while(p)
				{
					s.push(p);
					p = p->left;
				}
				TreeNode *t = s.top();
				s.pop();
				if(pre && t->val <= pre->val)
					return false;
				pre = t;
				p = t->right;
			}
			return true;
		}

	public:
		bool isValidBST6(TreeNode *root)
		{
			if(!root)
				return true;
			TreeNode *cur = root, *pre, *parent = NULL;
			bool res = true;
			while(cur)
			{
				if(!cur->left)
				{
					if(parent && parent->val >= cur->val)
						res = false;
					parent = cur;
					cur = cur->right;
				}
				else
				{
					pre = cur->left;
					while(pre->right && pre->right != cur)
						pre = pre->right;
					if(!pre->right)
					{
						pre->right = cur;
						cur = cur->left;
					}
					else
					{
						pre->right = NULL;
						if(parent->val >= cur->val)
							res = false;
						parent = cur;
						cur = cur->right;
					}
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

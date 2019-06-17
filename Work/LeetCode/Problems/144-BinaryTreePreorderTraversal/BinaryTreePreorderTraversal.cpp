/*************************************************************************
    > File Name: BinaryTreePreorderTraversal.cpp
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
	TreeNode(int x) : val(x),left(NULL),right(NULL)
	{

	}
};

class Solution
{
	public:
		vector<int> preorderTraversal1(TreeNode *root)
		{
			if(!root)
				return {};
			vector<int> res;
			stack<TreeNode *> s{{root}};
			while(!s.empty())
			{
				TreeNode *t = s.top();
				s.pop();
				res.push_back(t->val);
				if(t->right)
					s.push(t->right);
				if(t->left)
					s.push(t->left);
			}
			return res;
		}
	public:
		vector<int> preorderTraversal2(TreeNode *root)
		{
			vector<int> res;
			stack<TreeNode *>s;
			TreeNode *p = root;
			while(!s.empty() || p)
			{
				if(p)
				{
					s.push(p);
					res.push_back(p->val);
					p = p->left;
				}
				else
				{
					TreeNode *t = s.top();
					s.pop();
					p = t->right;
				}
			}
			return res;
		}

	public:
		vector<int> ans;
		vector<int> preorderTraversal3(TreeNode *root)
		{
			stack<TreeNode *> s;
			if(NULL == root)
				return ans;
			TreeNode *cur = root;
			while(cur != NULL || !s.empty())
			{
				while(cur!=NULL)
				{
					ans.push_back(cur->val);
					s.push(cur);
					cur = cur->left;
				}
				cur = s.top();
				s.pop();
				cur = cur->right;
			}
			return ans;
		}

	public:
		vector<int> preorderTraversal4(TreeNode *root)
		{
			vector<int> res;
			stack<TreeNode *> st;
			if(NULL == root)
				return res;
			res.push_back(root->val);
			st.push(root);
			TreeNode *iter = root->left;
			while(!st.empty() || iter != NULL)
			{
				while(iter != NULL)
				{
					res.push_back(iter->val);
					st.push(iter);
					iter = iter->left;
				}
				iter = st.top();
				st.pop();
				iter = iter->right;
			}
			return res;
		}

	public:
		vector<int> preorderTraversal5(TreeNode *root)
		{
			vector<int> res;
			TreeNode *cur = NULL, *pre = NULL;
			cur = root;
			while(cur)
			{
				if(cur->left == NULL)
				{
					res.push_back(cur->val);
					cur = cur->right;
				}
				else
				{
					pre = cur->left;
					while(pre->right != NULL&& pre->right != cur)
						pre = pre->right;
					if(pre->right == NULL)
					{
						pre->right = cur;
						res.push_back(cur->val);
						cur = cur->left;
					}
					else
					{
						pre->right = NULL;
						cur = cur->right;
					}
				}
			}
			return res;
		}

	public:
		vector<int> preorderTraversal6(TreeNode *root)
		{
			vector<int> res;
			stack<TreeNode *> s;
			while(1)
			{
				while(root)
				{
					res.push_back(root->val);
					s.push(root);
					root = root->left;
				}
				if(s.empty())
					break;
				root = s.top();
				s.pop();
				root = root->right;
			}
			return res;
		}
};
int main(void)
{
	return 0;
}

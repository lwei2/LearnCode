/*************************************************************************
    > File Name: TraverseATree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	Given a binary tree, return the preorder traversal of its nodes' values.
	Example:
	Input: [1,null,2,3]
	   1
	    \
	     2
	    /
	   3
	Output: [1,2,3]
	Given a binary tree, return the inorder traversal of its nodes' values.
	Example:
	Input: [1,null,2,3]
	1
    \
     2
    /
   3
	Output: [1,3,2]

 ************************************************************************/

#include<iostream>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
		void preorder(TreeNode *root, vector<int> &res)
		{
			if(root == NULL)
				return ;
			res.push_back(root->val);
			preorder(root->left, res);
			preorder(root->right, res);
		}
		vector<int> preorderTraversal1(TreeNode* root)
		{
			if(!root)
				return {};
			vector<int> res;
			stack<TreeNode*>s({root});
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
		vector<int> preorderTraversal2(TreeNode* root)
		{
			vector<int> res;
			stack<TreeNode*> s;
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
		vector<int> preorderTraversal3(TreeNode* root)
		{
			stack<TreeNode*>st;
			vector<int> res;
			if(root == NULL)
				return res;
			res.push_back(root->val);
			st.push(root);
			TreeNode *iter = root->left;
			while(!st.empty() || iter!=NULL)
			{
				while(iter!=NULL)
				{
					res.push_back(iter->val);
					st.push(iter);
					iter=iter->left;
				}
				iter = st.top();
				st.pop();
				iter = iter->right;
			}
			return res;
		}

		vector<int> preorderTraversal4(TreeNode* root)
		{
			vector<int> res;
			stack<TreeNode *> s;
			if(root == NULL)
				return res;
			TreeNode *cur = root;
			while(cur!=NULL || !s.empty())
			{
				while(cur!=NULL)
				{
					res.push_back(cur->val);
					s.push(cur);
					cur = cur->left;
				}
				cur = s.top();
				s.pop();
				cur = cur->right;
			}
			return res;
		}

		vector<int> preorderTraversal5(TreeNode *root)
		{
			vector<int>res;
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
					while(pre->right != NULL && pre->right != cur)
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
		vector<int> preorderTraversal6(TreeNode* root)
		{
			vector<int> res;
			stack<TreeNode*> s;
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
				root = root->right();
			}
			return res;
		}

		//
		// binary tree inorder traversal
		//
		void inOrderTravel(TreeNode* node, vector<int>& res)
		{
			if(node == nullptr)
				return ;
			inOrderTravel(node->left, res);
			res.emplace_back(node->val);
			inOrderTravel(node->right,res);
		}
		vector<int> inorderTraversal1(TreeNode* root)
		{
			vector<int> res;
			if(nullptr == root)
				return res;
			inOrderTravel(root, res);
			return res;
		}
		vector<int> inorderTraversal2(TreeNode* root)
		{
			vector<int> res;
			stack<TreeNode*> s;
			auto node = root;
			while(node!=nullptr || !s.empty())
			{
				while(node != nullptr)
				{
					s.push(node);
					node = node->left;
				}
				if(!s.empty())
				{
					node = s.top();
					res.emplace_back(node->val);
					s.pop();
					node = node->right;
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

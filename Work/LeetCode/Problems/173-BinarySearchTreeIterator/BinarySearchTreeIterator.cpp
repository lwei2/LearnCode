/*************************************************************************
    > File Name: BinarySearchTreeIterator.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		struct TreeNode
		{
			int val;
			TreeNode *left;
			TreeNode *right;
			TreeNode(int x):val(x),left(NULL),right(NULL)
			{

			}
		};
};

class BSTIterator
{
	stack<TreeNode*>st;
	public:
		BSTIterator(TreeNode *root)
		{
			auto cur = root;
			while(cur)
			{
				st.push(cur);
				cur = cur->left;
			}
		}
		/** @return the next smallest number */
		int next()
		{
			auto node = st.top();
			st.pop();
			int val = node->val;
			auto cur = node->right;
			while(cur)
			{
				st.push(cur);
				cur = cur->left;
			}
			return val;
		}

		/** @return whether we have a next smallest number */
		bool hasNext()
		{
			return !st.empty();
		}
};

int main(void)
{
	return 0;
}

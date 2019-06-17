/*************************************************************************
    > File Name: BinaryTreePostorderTraversal.cpp
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
	TreeNode(int x) : val(x), left(NULL), right(NULL)
	{

	}
};

class Solution
{
	public:
		vector<int> postorderTraversal(TreeNode *root)
		{
			vector<int> res;
			stack<TreeNode *> st;
			if(root)
				st.push(root);
			while(!st.empty())
			{
				auto t = st.top();
				st.pop();
				res.push_back(t->val);
				if(t->left)
					st.push(t->left);
				if(t->right)
					st.push(t->right);
			}
			return vector<int>(res.rbegin(), res.rend());
		}
};



int main(void)
{
	return 0;
}

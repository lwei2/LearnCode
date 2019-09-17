/*************************************************************************
    > File Name: Pro4.5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode 
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL)
	{

	}
};

class Checker
{
	public:
		bool checkBST(TreeNode *root)
		{
			vector<int> ans;
			inorder(ans, root);
			for(int i = 0; i < ans.size() - 1; i++)
			{
				if(ans[i] > ans[i+1])
					return false;
			}
			return true;
		}
		void inorder(vector<int> &ans, TreeNode *root)
		{
			if(root == NULL)
				return;
			inorder(ans,root->left);
			ans.push_back(root->val);
			inorder(ans, root->right);
			return;
		}
};


int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: PathSumII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode 
{
	public:
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
		vector<vector<int> > res;
		void solve(TreeNode *root, int sum, int i, vector<int> ans)
		{
			bool flag = false;
			if(root == NULL)
				return;
			if(i + root->val == sum && root->left == NULL && root->right == NULL)
			{
				ans.push_back(root->val);
				res.push_back(ans);
				return;
			}
			if(root->left != NULL)
			{
				flag = true;
				ans.push_back(root->val);
				solve(root->left, sum, i + root->val, ans);
			}
			if(flag)
				ans.pop_back();
			
			flag = false;
			if(root->right != NULL)
			{
				flag = true;
				ans.push_back(root->val);
				solve(root->right, sum, i+root->val, ans);
			}
			if(flag)
				ans.pop_back();
		}
		vector<vector<int> >pathSum(TreeNode* root,int sum)
		{
			vector<int> ans;
			solve(root, sum, 0, ans);
			return res;
		}
};

int main(void)
{
	return 0;
}









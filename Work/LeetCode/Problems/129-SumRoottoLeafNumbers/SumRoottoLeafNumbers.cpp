/*************************************************************************
    > File Name: SumRoottoLeafNumbers.cpp
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
		void dfs(TreeNode *root, int &sum, int num)
		{
			if(!root)
				return;
			num = num*10 + root->val;
			if(!root->left && !root->right)
				sum += num;
			dfs(root->left, sum, num);
			dfs(root->right, sum, num);
		}
		int sumNumbers(TreeNode *root)
		{
			int sum = 0;
			if(!root)
				return 0;
			dfs(root, sum, 0);
			return sum;
		}
};
int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: BinaryTreeMaximumPathSum.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>

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
	private:
		int ans = INT_MIN;
	public:
		int allPathSum(TreeNode *root)
		{
			if(!root)
				return INT_MIN;
			int l = max(allPathSum(root->left), 0), r = max(allPathSum(root->right), 0);
			ans = max(ans, root->val + l + r);
			return root->val + max(l, r);

		}
		int maxPathSum(TreeNode *root)
		{
			return max(ans, allPathSum(root));
		}
}
int main(void)
{
	return 0;
}

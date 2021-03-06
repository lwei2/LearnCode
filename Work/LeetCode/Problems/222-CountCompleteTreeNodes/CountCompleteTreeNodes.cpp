/*************************************************************************
    > File Name: CountCompleteTreeNodes.cpp
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
	TreeNode(int x):val(x), left(NULL),right(NULL)
	{

	}
};

class Solution
{
	public:
		int countNodes(TreeNode *root)
		{
			if(NULL == root)
				return 0;
			return 1+countNodes(root->left) + countNodes(root->right);
		}
}
int main(void)
{
	return 0;
}


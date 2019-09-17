/*************************************************************************
    > File Name: Pro4.1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :实现一个函数，检查二叉树是否平衡，平衡的定义如下，对于树中的任意一个结点，其两颗子树的高度差不超过1。

给定指向树根结点的指针TreeNode* root，请返回一个bool，代表这棵树是否平衡。
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

class Balance
{
	public:
		bool isBalance1(TreeNode *root)
		{
			if(root == NULL)
				return true;
			int diff = depth(root->left) - depth(root->right);
			if(diff > 1 || diff < -1)
				return false;
			return isBalance1(root->left) && isBalance1(root->right);
		}
		int depth(TreeNode *root)
		{
			if(root == NULL)
				return 0;
			int left = depth(root->left);
			int right = depth(root->right);
			return (left > right) ? (left + 1) : (right + 1);
		}
};


int main(void)
{
	return 0;
}

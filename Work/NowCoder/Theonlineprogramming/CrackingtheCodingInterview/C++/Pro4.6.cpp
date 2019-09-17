/*************************************************************************
    > File Name: Pro4.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请设计一个算法，寻找二叉树中指定结点的下一个结点（即中序遍历的后继）。
给定树的根结点指针TreeNode* root和结点的值int p，请返回值为p的结点的后继结点的值。保证结点的值大于等于零小于等于100000且没有重复值，若不存在后继返回-1。
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x):val(x), left(NULL),right(NULL)
	{

	}
};

class Successor
{
	public:
		int findSucc(TreeNode *root, int p)
		{
			bool sign = 0;
			return findSucc(root, p, sign);
		}
		int findSucc(TreeNode *root, int p, bool &sign)
		{
			if(root == NULL)
				return -1;
			int left = findSucc(root->left, p, sign);
			if(left != -1)
				return left;
			if(sign == true)
				return root->val;
			if(root->val == p)
				sign = true;
			return findSucc(root->right, p, sign);
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: ConstructBinaryTreefromProeorderandInorderTraversal.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

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
		TreeNode *buildTree(vector<int>& preorder, vector<int>& inorder)
		{
			return buildTree(preorder, inorder, 0, preorder.size() - 1, 0);
		}
		TreeNode *buildTree(vector<int>& preorder, vector<int>& inorder, int start, int end, int pre)
		{
			if(start > end)
				return NULL;
			if(start == end)
				return new TreeNode(inorder[start]);
			TreeNode *root = new TreeNode(preorder[pre]);
			int index = -1;
			for(int i = start; i <= end; i++)
			{
				if(inorder[i] == preorder[pre])
				{
					index = i;
					break;
				}	
			}
			root->left = buildTree(preorder, inorder, start, index - 1, pre + 1);
			root->right = buildTree(preorder, inorder, index + 1, end, pre + index - start + 1);
			return root;
		}
};


int main(void)
{
	return 0;
}

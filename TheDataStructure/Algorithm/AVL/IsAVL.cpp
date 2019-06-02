/*************************************************************************
    > File Name: IsAVL.cpp
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
		int GetTreeDepth1(TreeNode *pNode)
		{
			if(pNode == NULL)
				return 0;
			int nLeft, nRight;
			if(pNode->left != NULL)
				nLeft = GetTreeDepth(pNode->left) + 1;
			if(pNode->right!= NULL)
				nRight = GetTreeDepth(pNode->right) + 1;
			return (nLeft > nRight) ? nLeft : nRight;
		}
		bool IsAVL1(TreeNode *root)
		{
			if(NULL == root)
				return true;
			int nLeftDepth = GetTreeDepth1(root->left);
			int nRightDepth = GetTreeDepth1(root->right);
			int nDiffInDepth = nLeftDepth - nRightDepth;
			if(nDiffInDepth < - 1 || nDiffInDepth > 1)
				return false;
			return (IsAVL1(root->left) && (IsAVL1(root->right)));
		}

	public:
		bool IsCheckIsAVL2(TreeNode *root, int *pDepth)
		{
			if(NULL == root)
			{
				*pDepth = 0;
				return true;
			}
			int nLeft, nRight;
			int nDiffInDepth;
			if(IsCheckIsAVL2(root->left, &nLeft) && IsCheckIsAVL2(root->right, &nRight))
			{
				nDiffInDepth = nLeft - nRight;
				if(nDiffInDepth >= -1 && nDiffInDepth <= 1)
				{
					*pDepth = nLeft > nRight ? nLeft : nRight + 1;
					return true;
				}
			}
			return false;
		}
		bool IsAVL2(TreeNode *root)
		{
			int nDepth = 0;
			return IsCheckIsAVL2(root, &nDepth);
		}

	public:
		bool IsAVL3(TreeNode *root, int &height)
		{
			if(root == NULL)
			{
				height = 0;
				return true;
			}
			int heightLeft, heightRight;
			bool resultLeft = IsAVL3(root->left, heightLeft);
			bool resultRight = IsAVL3(root->right, heightRight);
			if(resultLeft && resultRight && abs(heightLeft - heightRight) <= 1)
			{
				height = max(heightLeft, heightRight) + 1;
				return true;
			}
			else
			{
				height = max(heightLeft, heightRight) + 1;
				return false;
			}
		}
};

int main(void)
{
	return 0;
}

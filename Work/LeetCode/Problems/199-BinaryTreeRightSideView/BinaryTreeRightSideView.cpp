/*************************************************************************
    > File Name: BinaryTreeRightSideView.cpp
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
		vector<int> rightSideView(TreeNode *root)
		{
			vector<int> aResult;
			if(NULL == root)
				return aResult;
			queue<TreeNode *> aQueue;
			aQueue.push(root);
			while(!aQueue.empty())
			{
				int aCount = aQueue.size();
				int aCount1 = aCount - 1;
				for(int i = 0; i < aCount; i++)
				{
					TreeNode *aNode = aQueue.front();
					aQueue.pop();
					if(aNode->left)
						aQueue.push(aNode->left);
					if(aNode->right)
						aQueue.push(aNode->right);
					if(i == aCount1)
						aResult.push_back(aNode->val);
				}
			}
			return aResult;
		}
};


int main(void)
{
	return 0;
}

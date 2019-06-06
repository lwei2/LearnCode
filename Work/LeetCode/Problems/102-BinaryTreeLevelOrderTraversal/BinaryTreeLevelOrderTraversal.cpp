/*************************************************************************
    > File Name: BinaryTreeLevelOrderTraversal.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <queue>

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
		vector<vector<int> >levelOrder(TreeNode *root)
		{
			vector<vector<int> >res;
			if(NULL == root)
				return res;
			queue<TreeNode*>q;
			q.push(root);
			while(!q.empty())
			{
				int size = q.size();
				vector<int> level;
				for(int i = 0; i < size; i++)
				{
					TreeNode *curr = q.front();
					q.pop();
					level.push_back(curr->val);
					if(curr->left != NULL)
						q.push(cur->left);
					if(curr->right != NULL)
						q.push(cur->right);
				}
				res.push_back(level);
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

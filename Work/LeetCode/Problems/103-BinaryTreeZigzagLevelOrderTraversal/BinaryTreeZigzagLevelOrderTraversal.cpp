/*************************************************************************
    > File Name: BinaryTreeZigzagLevelOrderTraversal.cpp
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
		vector<vector<int> >zigzagLevelOrder(TreeNode *root)
		{
			vector<vector<int> >res;
			if(!root)
				return res;
			vector<TreeNode *> prev(1,root);
			while(prev.size())
			{
				res.emplace_back(prev.size());
				if(res.size() % 2)
					for(int i = 0; i < prev.size(); i++)
						res.back()[i] = prev[i]->val;
				else
					for(int i = 0; i < prev.size(); i++)
						res.back()[prev.size()-i-1] = prev[i]->val;

				vector<TreeNode *>cur;
				for(TreeNode *p :prev)
				{
					if(p->left)
						cur.push_back(p->left);
					if(p->right)
						cur.push_back(p->right);
				}
				swap(cur,prev);
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: BinaryTreeInorderTravelsal.cpp
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
		vector<int> inorderTravelsal(TreeNode* root)
		{
			vector<int> res;
			stack<TreeNode *> s;
			TreeNode *p = root;
			while(nullptr != p || !s.empty())
			{
				if(p!=nullptr)
				{
					s.push(p);
					p = p->left;
				}
				if(!s.empty())
				{
					p = s.top();
					res.emplace_back(p->val);
					s.pop();
					p = p->right;
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

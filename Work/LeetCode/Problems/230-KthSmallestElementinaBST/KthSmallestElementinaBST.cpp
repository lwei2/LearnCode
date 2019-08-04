/*************************************************************************
    > File Name: KthSmallestElementinaBST.cpp
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
		int KthSmallest(TreeNode *root, int k)
		{
			stack<TreeNode*> s;
			TreeNode *tmp = root;
			while(tmp)
			{
				s.push(tmp);
				tmp = tmp->left;
			}
			k--;
			while(k--)
			{
				TreeNode *t = s.top();
				s.pop();
				t = t->right;
				while(t)
				{
					s.push(t);
					t = t->left;
				}
			}
			return s.top()->val;
		}
};


int main(void)
{
	return 0;
}

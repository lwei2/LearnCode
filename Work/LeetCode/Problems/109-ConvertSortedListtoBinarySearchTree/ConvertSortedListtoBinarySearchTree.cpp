/*************************************************************************
    > File Name: ConvertSortedListtoBinarySearchTree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};

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
		TreeNode *dfs(int p, int q, vector<int>& res)
		{
			if(p > q)
				return NULL;
			int mid = (p + q)/2;
			TreeNode *root = new TreeNode(res[mid]);
			root->left = dfs(p, mid - 1, res);
			root->right = dfs(mid+1, q, res);
			return root;
		}
		TreeNode* sortedListToBST(ListNode* head)
		{
			vector<int> res;
			ListNode *p = head;
			while(p)
			{
				res.push_back(p->val);
				p = p->next;
			}
			return dfs(0, res.size() - 1, res);
		}
};


int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: Pro17.13.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode
{
	public:
		int val;
		struct TreeNode *left;
		struct TreeNode *right;
		TreeNode(int x):val(x),left(NULL),right(NULL)
		{

		}
};

struct ListNode
{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};

class Converter
{
	public:
		ListNode *treeToList(TreeNode *root)
		{
			if(root == NULL)
				return NULL;
			ListNode *left = treeToList(root->left);
			ListNode *right = treeToList(root->right);
			ListNode *mid = new ListNode(root->val);
			mid->next = right;
			if(left != NULL)
			{
				ListNode *tmp = left;
				while(tmp->next)
					tmp = tmp->next;
				tmp->next = mid;
			}
			delete root;
			return left != NULL ? left : mid;
		}
}

int main(void)
{
	return 0;
}

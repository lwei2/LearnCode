/*************************************************************************
    > File Name: ConstructBinaryTreefromInorderandPostorderTraversal.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

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
		TreeNode *BTree(vector<int>& inorder, int beg, int end, vector<int>& postorder, unordered_map<int,int>& m)
		{
			if(end < beg)
				return NULL;
			int nval = postorder.back();
			TreeNode *root = new TreeNode(nval);

			postorder.pop_back();
			int split = m[nval];
			root->right = BTree(inorder, split+1, end, postorder, m);
			root->left = BTree(inorder, beg, split-1, postorder, m);
			return root;
		}
		TreeNode *buildTree(vector<int>& inorder, vector<int>& postorder)
		{
			unordered_map<int, int> m;
			int n = inorder.size();
			for(int i = 0; i < n; i++)
				m[inorder[i]] = i;
			TreeNode *root = BTree(inorder, 0, n-1, postorder, m);
			return root;
		}

};

int main(void)
{
	return 0;
}

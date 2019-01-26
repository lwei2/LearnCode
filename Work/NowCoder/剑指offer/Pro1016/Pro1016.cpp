/*************************************************************************
    > File Name: Pro1016.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入两棵二叉树A，B，判断B是不是A的子结构。（ps：我们约定空树不是任意一个树的子结构）
 ************************************************************************/

#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};

class Solution
{
	public:
		bool HasSubstree(TreeNode* pRoot1, TreeNode* pRoot2)
		{
			if(!pRoot1)
				return false;
			if(!pRoot2)
				return false;
			return (dfs(pRoot1, pRoot2) || HasSubstree(pRoot1->left, pRoot2) || HasSubstree(pRoot1->right, pRoot2));
		}
	private:
		bool dfs(TreeNode* p1, TreeNode* p2)
		{
			if(!p2)
				return true;
			if(!p1)
				return false;
			if(p1->val != p2->val)
				return false;
			return dfs(p1->left, p2->left) && dfs(p1->right, p2->right);
		}
};
int main(void)
{
	return 0;
}

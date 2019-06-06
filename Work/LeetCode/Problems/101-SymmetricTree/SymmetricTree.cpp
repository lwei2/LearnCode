/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
	public:
		bool isSymmetric(TreeNode* root)
		{
			if(!root)
			  return true;
			queue<TreeNode*>Q;
			Q.push(root->left);
			Q.push(root->right);
			while(!Q.empty())
			{
				TreeNode* first = Q.front();
				Q.pop();
				TreeNode* second = Q.front();
				Q.pop();
				if(!first && !second)
					continue;
				if(!first || !second || first->val!= second->val)
					return false;
				Q.push(first->left);
				Q.push(second->right);
				Q.push(first->right);
				Q.push(second->left);
			}
			return true;
		}
};

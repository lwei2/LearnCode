

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) 
	{
		if(root == NULL)
			return 0;
		queue<TreeNode *> Queue;
		Queue.push(root);
		int result = 0;
		int depth = 1;
		while(true)
		{
			int i = Queue.size();
			while(i--)
			{
				if(!root->left && !root->right)
					result = max(result, depth);
				if(root->left)
					Queue.push(root->left);
				if(root->right)
					Queue.push(root->right);
				Queue.pop();
				root = Queue.front();
			}
			if(Queue.empty())
			  break;
			depth++;
		}
		return result;
    }
};

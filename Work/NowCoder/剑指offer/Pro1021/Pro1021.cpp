/*************************************************************************
    > File Name: Pro1021.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :从上往下打印出二叉树的每个节点，同层节点从左至右打印。
 ************************************************************************/

#include<iostream>
#include<vector>
#include<queue>

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
		vector<int> PrintFromTopToBottom(TreeNode *root)
		{
			vector<int> result;
			queue<TreeNode *> Queue;
			TreeNode *p;
			if(root == NULL)
				return result;
			Queue.push(root);
			while(!Queue.empty())
			{
				p = Queue.front();
				result.push_back(p->val);
				if(p->left != NULL)
					Queue.push(p->left);
				if(p->right != NULL)
					Queue.push(p->right);
				Queue.pop();
			}
			return result;
		}
};

int main(void)
{

	return 0;
}

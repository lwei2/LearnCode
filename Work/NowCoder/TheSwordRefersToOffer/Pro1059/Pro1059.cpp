/*************************************************************************
    > File Name: Pro1059.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :从上到下按层打印二叉树，同一层结点从左至右输出。每一层输出一行。
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
class Solution {
public:
        vector<vector<int> > Print(TreeNode* pRoot) {
            vector<vector<int> > res;
            vector<int> tmp;
            queue<TreeNode*> que;
            queue<int> dque;
            int depth = 0;
            que.push(pRoot);
            dque.push(depth);
            TreeNode *node;
            while(!que.empty())
            {
                node = que.front();
                if(depth != dque.front())
                {
                    res.push_back(tmp);
                    tmp.clear();
                    depth = dque.front();
                }
                que.pop();
                dque.pop();
                if(node)
                {
                    que.push(node->left);
                    que.push(node->right);
                    dque.push(depth+1);
                    dque.push(depth+1);
                    tmp.push_back(node->val);
                }
            }            
            return res;                                    
        }
    
};
int main(void)
{

	return 0;
}

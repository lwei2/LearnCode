/*************************************************************************
    > File Name: Pro1058.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请实现一个函数按照之字形打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右至左的顺序打印，第三行按照从左到右的顺序打印，其他行以此类推。
 ************************************************************************/

#include<iostream>
#include<vector>
#include<stack>

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
        vector<vector<int> >res;
        if(pRoot == nullptr)
            return res;
        stack<TreeNode*> StackL;
        stack<TreeNode*> StackR;
        TreeNode* popNode;
        vector<int> tmp;
        tmp.push_back(pRoot->val);
        res.push_back(tmp);
        tmp.clear();
        StackL.push(pRoot);
        while(!StackL.empty() || !StackR.empty())
        {
            while(!StackL.empty())
            {
                popNode = StackL.top();
                StackL.pop();
                if(popNode->right)
                {
                    StackR.push(popNode->right);
                    tmp.push_back(popNode->right->val);
                }
                if(popNode->left)
                {
                    StackR.push(popNode->left);
                    tmp.push_back(popNode->left->val);
                }
            }
            if(!tmp.empty())
            {
                res.push_back(tmp);
                tmp.clear();
            }
            while(!StackR.empty())
            {
                popNode = StackR.top();
                StackR.pop();
                if(popNode->left)
                {
                    StackL.push(popNode->left);
                    tmp.push_back(popNode->left->val);    
                }
                if(popNode->right)
                {
                    StackL.push(popNode->right);
                    tmp.push_back(popNode->right->val);
                }
            }
            if(!tmp.empty())
            {
                res.push_back(tmp);
                tmp.clear();
            }            
        }
        return res;
    }
    
};
int main(void)
{
	return 0;
}

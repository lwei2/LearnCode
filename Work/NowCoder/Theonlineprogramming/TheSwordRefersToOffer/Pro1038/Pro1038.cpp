/*************************************************************************
    > File Name: Pro1038.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一棵二叉树，判断该二叉树是否是平衡二叉树。
 ************************************************************************/

#include<iostream>

using namespace std;
class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(pRoot == NULL)
            return true;
        int leftDepth = getDepth(pRoot->left);
        int rightDepth = getDepth(pRoot->right);
        if(leftDepth > rightDepth + 1 || leftDepth + 1 < rightDepth)
            return false;
        else
            return IsBalanced_Solution(pRoot->left) && IsBalanced_Solution(pRoot->right);
    }
    int getDepth(TreeNode* pRoot)
    {
        if(pRoot == NULL)
            return 0;
        int leftDepth = getDepth(pRoot->left);
        int rightDepth = getDepth(pRoot->right);
        return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
    }
};
int main(void)
{
	return 0;
}

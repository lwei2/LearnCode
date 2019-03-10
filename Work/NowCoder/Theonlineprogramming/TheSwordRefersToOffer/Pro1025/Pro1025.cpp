/*************************************************************************
    > File Name: Pro1025.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入一棵二叉搜索树，将该二叉搜索树转换成一个排序的双向链表。要求不能创建任何新的结点，只能调整树中结点指针的指向。
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
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        if(pRootOfTree == NULL)
            return NULL;
        TreeNode *pointer = NULL;
        convert2List(pRootOfTree, pointer);
        while(pointer->left!=NULL)
        {
            pointer = pointer->left;
        }
        return pointer;
    }
    void convert2List(TreeNode *pRoot, TreeNode *&pointer)
    {
        if(pRoot == NULL)
            return ;
        if(pRoot->left != NULL)
            convert2List(pRoot->left, pointer);
        pRoot->left = pointer;
        if(pointer != NULL)
            pointer->right = pRoot;
        pointer = pRoot;
        if(pRoot->right != NULL)
        {
            convert2List(pRoot->right, pointer);
        }
    }
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: Pro1056.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
 ************************************************************************/

#include<iostream>

using namespace std;
struct TreeLinkNode {
    int val;
    struct TreeLinkNode *left;
    struct TreeLinkNode *right;
    struct TreeLinkNode *next;
    TreeLinkNode(int x) :val(x), left(NULL), right(NULL), next(NULL) {
        
    }
};
class Solution {
public:
    TreeLinkNode* GetNext(TreeLinkNode* pNode)
    {
		if(nullptr == pNode)
			return nullptr;
		TreeLinkNode* next = nullptr;
		if(pNode->right != nullptr)
		{
			TreeLinkNode* rightNode = pNode->right;
			while(rightNode->left != nullptr)
				rightNode = rightNode->left;
			next = rightNode;			
		}
		else if(pNode->next != nullptr)
		{
			TreeLinkNode* parentNode = pNode->next;
			TreeLinkNode* currentNode = pNode;
			while(parentNode != nullptr && currentNode == parentNode->right)
			{
				currentNode = parentNode;
				parentNode = parentNode->next;
			}
			next = parentNode;
		}
		return next;
    }
};
int main(void)
{
	return 0;
}

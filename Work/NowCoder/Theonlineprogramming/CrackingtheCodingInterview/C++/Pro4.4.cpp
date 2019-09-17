/*************************************************************************
    > File Name: Pro4.4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :对于一棵二叉树，请设计一个算法，创建含有某一深度上所有结点的链表。
给定二叉树的根结点指针TreeNode* root，以及链表上结点的深度，请返回一个链表ListNode，代表该深度上所有结点的值，请按树上从左往右的顺序链接，保证深度不超过树的高度，树上结点的值为非负整数且不超过100000。
 ************************************************************************/


#include <iostream>

using namespace std;

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x):val(x),left(NULL),right(NULL)
	{

	}
};

struct ListNode 
{
	int val;
	struct ListNode *next;
	ListNode(int x):val(x),next(NULL)
	{

	}
};

class TreeLevel
{
	public:
		ListNode *getTreeLevel(TreeNode *root, int dep)
		{
			if(NULL == root || dep <= 0)
				return NULL;
			queue<TreeNode *> q;
			q.push(root);
			int cnt = 1;
			while(cnt < dep)
			{
				int size = q.size();
				for(int i = 0; i < size; ++i)
				{
					TreeNode *p = q.front();
					q.pop();
					if(NULL != p->left)
						q.push(p->left);
					if(NULL != p->right)
						q.push(p->right);
				}
				++cnt;
			}
			ListNode *pHead = new ListNode(0);
			ListNode *pNode = pHead;
			while(!q.empty())
			{
				TreeNode *proot = q.front();
				q.pop();
				ListNode *p = new ListNode(proot->val);
				p->next = NULL;
				pNode->next = p;
				pNode = p;
			}
			return pHead->next;
		}
};


int main(void)
{
	return 0;
}

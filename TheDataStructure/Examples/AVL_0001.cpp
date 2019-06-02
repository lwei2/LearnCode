/*************************************************************************
    > File Name: AVL_0001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <cstdio>

using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode *m_pLeft;
	BinaryTreeNode *m_pRight;
};

BinaryTreeNode *CreateBinaryTreeNode(int value)
{
	BinaryTreeNode *pNode = new BinaryTreeNode();
	pNode->m_nValue = value;
	pNode->m_pLeft = NULL;
	pNode->m_pRight = NULL;
}

void ConnectTreeNodes(BinaryTreeNode *pParent, BinaryTreeNode *pLeft, BinaryTreeNode *pRight)
{
	if(pParent != NULL)
	{
		pParent->m_pLeft = pLeft;
		pParent->m_pRight = pRight;
	}
}

void PrintTreeNode(BinaryTreeNode *pNode)
{
	if(pNode != NULL)
	{
		printf("value of this node is:%d\n", pNode->m_nValue);
		if(pNode->m_pLeft != NULL)
			printf("value of its left child is:%d\n",pNode->m_pLeft->m_nValue);
		else
			printf("left child is null\n");

		if(pNode->m_pRight != NULL)
			printf("value of its right child is:%d\n", pNode->m_pRight->m_nValue);
		else
			printf("right child is null\n");
	}
	else
		printf("this node is null\n");
	printf("\n");
}

void PrintTree(BinaryTreeNode *pRoot)
{
	PrintTreeNode(pRoot);
	if(pRoot != NULL)
	{
		if(pRoot->m_pLeft != NULL)
			PrintTree(pRoot->m_pLeft);

		if(pRoot->m_pRight != NULL)
			PrintTree(pRoot->m_pRight);
	}
}

void DestroyTree(BinaryTreeNode *pRoot)
{
	if(pRoot != NULL)
	{
		BinaryTreeNode *pLeft = pRoot->m_pLeft;
		BinaryTreeNode *pRight = pRoot->m_pRight;

		delete pRoot;
		pRoot = NULL;
		DestroyTree(pLeft);
		DestroyTree(pRight);
	}
}

int TreeDepth(BinaryTreeNode *pRoot)
{
	if(NULL == pRoot)
		return 0;
	int nLeft = TreeDepth(pRoot->m_pLeft);
	int nRight = TreeDepth(pRoot->m_pRight);
	return (nLeft > nRight) ? (nLeft + 1):(nRight + 1);
}
bool IsBalanced_Solution1(BinaryTreeNode *pRoot)
{
	if(NULL == pRoot)
		return true;

	int left = TreeDepth(pRoot->m_pLeft);
	int right = TreeDepth(pRoot->m_pRight);
	int diff = left - right;
	if(diff > 1 || diff < -1)
		return false;
	return IsBalanced_Solution1(pRoot->m_pLeft) && IsBalanced_Solution1(pRoot->m_pRight);
}

bool IsBalanced(BinaryTreeNode *pRoot, int *pDepth);
bool IsBalanced_Solution2(BinaryTreeNode *pRoot)
{
	int depth = 0;
	return IsBalanced(pRoot, &depth);
}
bool IsBalanced(BinaryTreeNode *pRoot, int *pDepth)
{
	if(pRoot == NULL)
	{
		*pDepth = 0;
		return true;
	}
	int left, right;
	if(IsBalanced(pRoot->m_pLeft, &left) && IsBalanced(pRoot->m_pRight, &right))
	{
		int diff = left - right;
		if(diff <= 1 && diff >= -1)
		{
			*pDepth = 1 + (left > right ? left :right);
			return true;
		}
	}
	return false;
}
int main(void)
{
	BinaryTreeNode *pNode1 = CreateBinaryTreeNode(1);
	BinaryTreeNode *pNode2 = CreateBinaryTreeNode(2);
	BinaryTreeNode *pNode3 = CreateBinaryTreeNode(3);
	BinaryTreeNode *pNode4 = CreateBinaryTreeNode(4);
	BinaryTreeNode *pNode5 = CreateBinaryTreeNode(5);
	BinaryTreeNode *pNode6 = CreateBinaryTreeNode(6);
	BinaryTreeNode *pNode7 = CreateBinaryTreeNode(7);

	ConnectTreeNodes(pNode1, pNode2, pNode3);
	ConnectTreeNodes(pNode2, pNode4, pNode5);
	ConnectTreeNodes(pNode3, pNode6, pNode7);


	printf("Soluton1 begin: ");
	if(IsBalanced_Solution1(pNode1))
		printf("is balanced.\n");
	else
		printf("is not balanced.\n");

	printf("Soluton2 begin: ");
	if(IsBalanced_Solution2(pNode1))
		printf("is balanced.\n");
	else
		printf("is not balanced.\n");

	printf("\n");
	DestroyTree(pNode1);

	return 0;
}

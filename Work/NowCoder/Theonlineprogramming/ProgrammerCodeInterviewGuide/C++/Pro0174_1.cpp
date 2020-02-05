/*************************************************************************
    > File Name: Pro0174_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
#include <queue>
#include <limits.h>
#include <algorithm>

using namespace std;

struct Node
{
	int data;
	Node *left, *right;
	Node(int val):data(val),left(nullptr),right(nullptr)
	{

	}
};

Node *getNode(map<int, Node*> &tree, int x)
{
	auto it = tree.find(x);
	return it->second;
}

struct ReturnType
{
	bool bst;
	int min,max;
	ReturnType(bool b, int n, int m):bst(b),min(n),max(m)
	{

	}
};

ReturnType isBST(Node *root)
{
	if(!root)
		return ReturnType(true, INT_MAX, INT_MIN);
	ReturnType lData = isBST(root->left);
	ReturnType rData = isBST(root->right);
	int min =  std::min(root->data, std::min(lData.min, rData.min));
	int max =  std::max(root->data, std::max(lData.max, rData.max));
	bool isTrue;
	if(lData.bst == true && rData.bst == true && lData.max < root->data && rData.min > root->data)
		isTrue = true;
	else
		isTrue = false;
	return ReturnType(isTrue, min, max);
}

bool isCBT(Node *root)
{
	if(nullptr == root)
		return true;
	queue<Node*>que;
	bool leaf = false;
	que.push(root);
	while(!que.empty())
	{
		Node *leftSide = que.front()->left;
		Node *rightSide = que.front()->right;
		que.pop();
		if((leaf && (leftSide != nullptr || rightSide != nullptr)) || (rightSide && !leftSide))
			return false;
		if(leftSide)
			que.push(leftSide);
		if(rightSide)
			que.push(rightSide);
		else
			leaf = true;
	}
	return true;
}

int main(void)
{
	int n,r;
	scanf("%d",&n);
	scanf("%d",&r);
	map<int, Node*> tree;
	Node *root = nullptr;
	root = tree[r] = new Node(r);
	int fa, lch, rch;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d%d",&fa,&lch,&rch);
		Node *leftNode = lch == 0 ? nullptr : new Node(lch);
		Node *rightNode = rch == 0 ? nullptr : new Node(rch);
		tree[lch] = leftNode;
		tree[rch] = rightNode;
		getNode(tree,fa)->left = leftNode;
		getNode(tree,fa)->right = rightNode;
	}
	ReturnType testBST = isBST(root);
	if(testBST.bst)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	bool testCBT = isCBT(root);
	if(testCBT)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}

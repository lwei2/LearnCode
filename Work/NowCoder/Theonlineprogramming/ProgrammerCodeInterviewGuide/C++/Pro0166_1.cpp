/*************************************************************************
    > File Name: Pro0166_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
#include <limits.h>
#include <cstdint>
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
	Node *maxBSTHead;
	int min, max, maxBSTSize;
	ReturnType(Node *node, int size, int mi, int ma)
		:maxBSTHead(node), maxBSTSize(size), min(mi),max(ma)
	{

	}
};

ReturnType process(Node *root)
{
	if(nullptr == root)
		return ReturnType(nullptr, 0, INT_MAX, INT_MIN);
	ReturnType lData = process(root->left);
	ReturnType rData = process(root->right);
	int min = std::min(root->data, std::min(lData.min, rData.min));
	int max = std::max(root->data, std::max(lData.max, rData.max));
	int maxBSTSize = std::max(lData.maxBSTSize, rData.maxBSTSize);
	Node *maxBSTHead = lData.maxBSTSize >= rData.maxBSTSize ? lData.maxBSTHead : rData.maxBSTHead;
	if(lData.maxBSTHead == root->left && rData.maxBSTHead == root->right && lData.max < root->data && rData.min > root->data)
	{
		maxBSTSize = lData.maxBSTSize + rData.maxBSTSize + 1;
		maxBSTHead = root;
	}
	return ReturnType(maxBSTHead, maxBSTSize, min, max);
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
		getNode(tree, fa)->left = leftNode;
		getNode(tree, fa)->right = rightNode;
	}
	ReturnType result = process(root);
	cout<<result.maxBSTSize<<endl;
	return 0;
}






/*************************************************************************
    > File Name: Pro0163_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
#include <string>
#include <queue>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
	Node(int val):data(val),left(nullptr), right(nullptr)
	{

	}
};

Node *getNode(map<int, Node*> &tree, int x)
{
	auto it = tree.find(x);
	return it->second;
}

string seriaByPre(Node *root)
{
	if(nullptr == root)
		return "#!";
	string res = to_string(root->data) + "!";
	res += seriaByPre(root->left);
	res += seriaByPre(root->right);
	return res;
}

string seriaByLevel(Node *root)
{
	if(!root)
		return "#!";
	queue<Node*> que;
	que.push(root);
	string res = (to_string(root->data) + "!");
	while(!que.empty())
	{
		Node *tmp = que.front();
		que.pop();
		if(tmp->left)
		{
			res += (to_string(tmp->left->data) + "!");
			que.push(tmp->left);
		}
		else
			res += "#!";
		if(tmp->right)
		{
			res += (to_string(tmp->right->data) + "!");
			que.push(tmp->right);
		}
		else
			res += "#!";
	}
	return res;
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
		scanf("%d%d%d",&fa, &lch, &rch);
		Node *leftNode = lch == 0 ? nullptr : new Node(lch);
		Node *rightNode = rch == 0 ? nullptr : new Node(rch);
		tree[lch] = leftNode;
		tree[rch] = rightNode;
		getNode(tree, fa)->left = leftNode;
		getNode(tree, fa)->right = rightNode;
	}
	string str1 = seriaByPre(root);
	cout<<str1<<endl;
	string str2 = seriaByLevel(root);
	cout<<str2<<endl;
	return 0;
}

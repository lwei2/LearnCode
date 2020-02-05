/*************************************************************************
    > File Name: Pro0178_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Node
{
	int level;
	int parent = -1;
	int left = 0, right = 0;
};

void confirmNodeLevel(vector<Node> &tree, int index)
{
	auto &node = tree[index];
	if(node.level != -1)
	{
		if(node.left)
		{
			tree[node.left].level = node.level + 1;
			confirmNodeLevel(tree, node.left);
		}
		if(node.right)
		{
			tree[node.right].level = node.level + 1;
			confirmNodeLevel(tree, node.right);
		}
		return;
	}
	if(node.parent == -1)
		return;
	node.level = tree[node.parent].level + 1;
}

int getFirstCommonAncestors(vector<Node> &tree, int o1, int o2)
{
	while(o1 != o2)
	{
		if(tree[o1].level > tree[o2].level)
			o1 = tree[o1].parent;
		else if(tree[o1].level < tree[o2].level)
			o2 = tree[o2].parent;
		else
		{
			o1 = tree[o1].parent;
			o2 = tree[o2].parent;
		}
	}
	return o1;
}

int main(void)
{
	int n,root;
	int fa,lch, rch;
	int o1, o2;
	vector<Node> tree;
	cin>>n>>root;
	tree.resize(n+1);
	tree[root].level = 1;
	for(int i = 0; i < n; ++i)
	{
		cin>>fa>>lch>>rch;
		if(lch > 0)
		{
			tree[fa].left = lch;
			tree[tree[fa].left].parent = fa;
		}
		if(rch > 0)
		{
			tree[fa].right = rch;
			tree[tree[fa].right].parent = fa;
		}
		confirmNodeLevel(tree,fa);
	}
	int m;
	cin>>m;
	vector<int> results;
	results.reserve(m);
	for(int i = 0; i < m; ++i)
	{
		cin>>o1>>o2;
		results.emplace_back(getFirstCommonAncestors(tree,o1,o2));
	}
	for(auto &item : results)
		cout<<item<<endl;
	return 0;
}

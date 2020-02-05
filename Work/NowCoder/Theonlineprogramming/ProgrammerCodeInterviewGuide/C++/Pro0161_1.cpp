/*************************************************************************
    > File Name: Pro0161_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left,*right;
	TreeNode(int v):val(v),left(nullptr), right(nullptr)
	{

	}
};

void pre_traverse(TreeNode *root)
{
	if(nullptr == root)
		return;
	cout<<root->val<<" ";
	pre_traverse(root->left);
	pre_traverse(root->right);
}

void in_traverse(TreeNode *root)
{
	if(nullptr == root)
		return;
	in_traverse(root->left);
	cout<<root->val<<" ";
	in_traverse(root->right);

}

void post_traverse(TreeNode *root)
{
	if(nullptr == root)
		return;
	post_traverse(root->left);
	post_traverse(root->right);
	cout<<root->val<<" ";
}

int main(void)
{
	int n,tmp;
	map<int, TreeNode*>m;
	cin>>n;
	cin>>tmp;
	TreeNode *root = new TreeNode(tmp);
	m[tmp] = root;
	for(int i = 0; i < n; ++i)
	{
		cin>> tmp;
		TreeNode *node;
		if(!m.count(tmp))
		{
			node = new TreeNode(tmp);
			m[tmp] = node;			
		}
		else
		{
			node = m[tmp];
		}
		cin>>tmp;
		if(tmp != 0)
		{
			TreeNode *left;
			if(!m.count(tmp))
			{
				left = new TreeNode(tmp);
				m[tmp] = left;
			}
			else
			{
				left = m[tmp];
			}
			node->left = left;
		}
		cin>>tmp;
		if(tmp != 0)
		{
			TreeNode *right;
			if(!m.count(tmp))
			{
				right = new TreeNode(tmp);
				m[tmp] = right;
			}
			else
			{
				right = m[tmp];
			}
			node->right = right;
		}
	}
	pre_traverse(root);
	cout<<endl;
	in_traverse(root);
	cout<<endl;
	post_traverse(root);
	cout<<endl;
	return 0;
}

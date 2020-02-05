/*************************************************************************
    > File Name: Pro0165_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left, *right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr)
	{

	}
};

int preOrder(TreeNode *head, int sum, int preSum, int level, int maxLen, unordered_map<int, int> &sumMap)
{
	if(nullptr == head)
		return maxLen;
	int curSum = preSum + head->val;
	if(sumMap.count(curSum) == 0)
		sumMap[curSum] = level;
	if(sumMap.count(curSum - sum))
		maxLen = max(level - sumMap[curSum - sum], maxLen);
	maxLen = preOrder(head->left, sum, curSum, level + 1, maxLen, sumMap);
	maxLen = preOrder(head->right, sum, curSum, level + 1, maxLen, sumMap);
	if(level == sumMap[curSum])
		sumMap.erase(curSum);
	return maxLen;
}

int maxLen(TreeNode *root, int sum)
{
	unordered_map<int, int> sumMap;
	sumMap[0] = 0;
	return preOrder(root, sum, 0, 1, 0, sumMap);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	int n,r;
	cin>>n>>r;
	vector<TreeNode *> a(n, nullptr);
	TreeNode *root = new TreeNode(0);
	a[r - 1] = root;
	int result = 0;
	int fa, lch, rch, val;
	TreeNode *node = nullptr;
	for(int i = 0; i < n; ++i)
	{
		cin>>fa>>lch>>rch>>val;
		node = a[fa-1];
		if(nullptr == node)
		{
			node = new TreeNode(val);
			a[fa - 1] = node;
		}
		else
		{
			node->val = val;
		}
		if(lch != 0)
		{
			if(a[lch - 1] == NULL)
			{
				node->left = new TreeNode(0);
				a[lch - 1] = node->left;
			}
			else
				node->left = a[lch-1];
		}
		if(rch != 0)
		{
			if(a[rch - 1] == NULL)
			{
				node->right = new TreeNode(0);
				a[rch - 1] = node->right;
			}
			else
				node->right = a[rch - 1];
		}
	}
	int sum;
	cin>>sum;
	result = maxLen(root, sum);
	cout<<result<<endl;
	return 0;
}

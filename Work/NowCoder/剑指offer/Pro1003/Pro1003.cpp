/*************************************************************************
    > File Name: Pro1003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :	输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。
 ************************************************************************/
/*
思路：递归思想
前序序列的第一个元素即为根节点，根据根节点的值在中序序列找到根节点的位置假定为i
则根据二叉树前序和中序的规律：
前序序列索引1~i构成子数列为根节点左子树的前序序列，i+1~n1构成子数列为根节点右子树的前序序列（n1为前序序列的长度）；
中序序列索引0~i-1构成子数列为根节点左子树的中序序列，i+1~n1构成子数列为根节点右子树的中序序列（n1为前序序列的长度）；
根节点的左节点为左子树的根节点，根节点的右节点为右子树的根节点
根据这样的规律一直递归下去，直到序列为空。
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
	public:
		TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
		{
			if(vin.size() == 0)
				return NULL;
			vector<int> pre_left, pre_right, vin_left, vin_right;
			TreeNode* node = new TreeNode(pre[0]);
			int index = 0;
			for(int i = 0; i < vin.size(); i++)
			{
				if(vin[i] == pre[0])
				{
					index = i;
					break;
				}
			}
			for(int i = 0; i < index; i++)
			{
				pre_left.push_back(pre[i+1]);
				vin_left.push_back(pre[i+1]);
			}
			for(int i = 0; i < vin.size() - index - 1; i++)
			{
				pre_right.push_back(pre[i+index+1]);
				vin_right.push_back(vin[i+index+1]);
			}
			node->left = reConstructBinaryTree(pre_left, vin_left);
			node->right = reConstructBinaryTree(pre_right, vin_right);
			return node;
		}
}

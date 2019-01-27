/*************************************************************************
    > File Name: Pro1060.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :请实现两个函数，分别用来序列化和反序列化二叉树
 ************************************************************************/

#include<iostream>
#include<vector>

using namespace std;
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
class Solution {
public:
    vector<int> res;
    void dfs1(TreeNode *root)
    {
        if(!root)
            res.push_back(0xFFFFFFFF);
        else
        {
            res.push_back(root->val);
            dfs1(root->left);
            dfs1(root->right);
        }
    }
    TreeNode *dfs2(int * &p)
    {
        if(*p == 0xFFFFFFFF)
        {
            p++;
            return NULL;
        }
        TreeNode *t = new TreeNode(*p);
        p++;
        t->left = dfs2(p);
        t->right = dfs2(p);
        return  t;
    }
    char* Serialize(TreeNode *root) {    
        res.clear();
        dfs1(root);
        int size = res.size();
        int *t = new int[size];
        for(int i = 0; i < size; i++)
            t[i] = res[i];
        return (char*)t;
    }
    TreeNode* Deserialize(char *str) {
        int *p = (int*)str;
        return dfs2(p);
    }
};
int main(void)
{

	return 0;
}

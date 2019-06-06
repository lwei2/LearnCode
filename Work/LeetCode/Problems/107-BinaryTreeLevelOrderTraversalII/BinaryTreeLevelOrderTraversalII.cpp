/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
		queue<TreeNode*> myQueue;
        stack<vector<int>> out;
        vector<vector<int>> ans;
        if(root){
            myQueue.push(root);
            while(!myQueue.empty()){
                int len = myQueue.size();
                vector<int> temp;
                for(int i=0;i<len;i++){
                    TreeNode* temp1=myQueue.front();
                    myQueue.pop();
                    temp.push_back(temp1->val);
                    if(temp1->left)
                        myQueue.push(temp1->left);
                    if(temp1->right)
                        myQueue.push(temp1->right);
                }
                out.push(temp);
            }
            int l=out.size();
            while(l>0){
                ans.push_back(out.top());
                out.pop();
                l--;
            }
        }
        return ans;       
    }
};

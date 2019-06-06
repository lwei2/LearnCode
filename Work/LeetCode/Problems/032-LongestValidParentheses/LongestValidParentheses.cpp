class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> St;
        St.push(-1);
        int result = 0;
        for(int i = 0; i < s.size(); i++)
        {
            int t = St.top();
            if(t!=-1&&s[i]==')'&&s[t]=='(')
            {
                St.pop();
                result = max(result,i-St.top());
            }
            else
                St.push(i);
        }
        return result;
    }
};

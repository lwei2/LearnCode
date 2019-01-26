/*************************************************************************
    > File Name: Pro1020.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否可能为该栈的弹出顺序。假设压入栈的所有数字均不相等。例如序列1,2,3,4,5是某栈的压入顺序，序列4,5,3,2,1是该压栈序列对应的一个弹出序列，但4,3,5,1,2就不可能是该压栈序列的弹出序列。（注意：这两个序列的长度是相等的）
 ************************************************************************/

#include<iostream>
#include<stack>
#include<vector>

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
        stack<int> s;
        int index = 0;
        for(int i = 0; i < popV.size(); ++i)
        {
            while(s.empty() || s.top()!=popV[i])
            {
                s.push(pushV[index++]);
                if(index > pushV.size())
                    return false;
            }
            s.pop();
        }
        if(s.empty())
            return true;
        else
            return false;
    }
};


int main(void)
{
	return 0;
}

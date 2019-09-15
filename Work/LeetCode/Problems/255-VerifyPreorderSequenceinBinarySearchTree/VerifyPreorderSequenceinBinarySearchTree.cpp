/*************************************************************************
    > File Name: VerifyPreorderSequenceinBinarySearchTree.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		bool verifyPreorder1(vector<int>& preorder)
		{
			int low = INT_MIN;
			stack<int> s;
			for(auto a : preorder)
			{
				if(a < low)
					return false;
				while(!s.empty() && a > s.top())
				{
					low = s.top();
					s.pop();
				}
				s.push(a);
			}
			return true;
		}

	public:
		bool verifyPreorder2(vector<int>& preorder)
		{
			int low = INT_MIN, i = -1;
			for(auto a : preorder)
			{
				if(a < low)
					return false;
				while(i > 0 && a > preorder[i])
				{
					low = preorder[i--];
				}
				preorder[++i] = a;
			}
			return true;
		}

	public:
		bool verifyPreorder3(vector<int>& preorder)
		{
			return helper(preorder, 0, preorder.size()-1, INT_MIN, INT_MAX);
		}
		bool helper(vector<int>& preorder, int start, int end, int lower, int upper)
		{
			if(start > end)
				return true;
			int val = preorder[start], i = 0;
			if(val <= lower || val >= upper)
				return false;
			for(i = start + 1; i <= end; ++i)
				if(preorder[i] >= val)
					break;
			return helper(preorder, start + 1, i - 1, lower, val) && 
				helper(preorder, i, end, val, upper);
		}
};




int main(void)
{
	return 0;
}

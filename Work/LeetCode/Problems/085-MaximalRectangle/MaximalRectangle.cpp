/*************************************************************************
    > File Name: MaximalRectangle.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		int FindRectangle1(vector<int> &arr)
		{
			int curArea = INT_MIN;
			int len = arr.size(); 
			stack<int> s;
			for(int i = 0; i < arr.size(); i++)
			{
				while(s.size() && arr[s.top()] >= arr[i])
				{
					int tmp = s.top();
					s.pop();
					if(s.size())
						curArea = max(curArea, arr[tmp]*(i-s.top()-1));
					else
						curArea = max(curArea, arr[tmp]*i);
				}
				s.push(i);
			}
			while(s.size())
			{
				int tmp = s.top();
				s.pop();
				if(s.size())
					curArea = max(curArea, arr[tmp]*(len-s.top()-1));
				else
					curArea = max(curArea, arr[tmp]*len);
			}
			return curArea;
		}
		int maximalRectangle1(vector<vector<char> >& matrix)
		{
			if(matrix.size() == 0 || matrix[0].size() == 0)
				return 0;
			vector<int> height(matrix[0].size(), 0);
			int res = 0;
			for(int i = 0; i < matrix.size(); i++)
			{
				for(int j = 0; j < matrix[0].size(); j++)
				{
					height[j] = (matrix[i][j] == '0' ? 0: height[j]+1);
				}
				res = max(res, FindRectangle1(height));
			}
			return res;
		}
}
int main(void)
{
	return 0;
}

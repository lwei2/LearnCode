	/*************************************************************************
    > File Name: LargestRectangleinHistogram.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	Given n non-negative integers representing the histogram's bar height where the width of each bar is 1, find the area of largest rectangle in the histogram.
	Example:
		Input: [2,1,5,6,2,3]
		Output: 10
 ************************************************************************/


#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

class Solution
{
	public:
		int largestRectangleArea(vector<int>& heights)
		{
			stack<int> s;
			int curArea = INT_MIN;
			int len = heights.size();
			if(!heights.size())
				return 0;
			for(int i = 0; i < heights.size(); i++)
			{
				while(s.size() && heights[s.top()] >= heights[i])
				{
					int tmp = s.top();
					s.pop();
					if(s.size())
						curArea = max(curArea,heights[tmp]*(i-s.top()-1));
					else
						curArea = max(curArea,heights[tmp]*i);
				}
				s.push(i);
			}
			while(s.size())
			{
				int tmp = s.top();
				s.pop();
				if(s.size())
					curArea = max(curArea,heights[tmp]*(len-s.top()-1));
				else
					curArea = max(curArea,heights[tmp]*len);
			}
			return curArea;
		}
};


int main(void)
{
	return 0;
}


/*************************************************************************
    > File Name: SummaryRanges.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<string> summaryRanges(vector<int>& nums)
		{
			vector<string> res;
			int start = 0, end = 0;
			while(start < nums.size())
			{
				while(end + 1 < nums.size() && nums[end] == nums[end+1] - 1)
					end++;
				if(start != end)
					res.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
				else
					res.push_back(to_string(nums[start]));
				end++;
				start = end;
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

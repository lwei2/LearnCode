/*************************************************************************
    > File Name: SlidingWindowMaximum.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;


class Solution
{
	public:
		vector<int> maxSlidingWindow(vector<int> &nums, int k)
		{
			if(nums.empty() || k == 0)
				return {};
			auto itmax = max_element(nums.begin(), nums.begin() + k);
			for(auto it = nums.begin(); it < nums.end() - k; ++it)
			{
				*it = *itmax;
				if(*(it + k) >= (*it))
					itmax = (it + k);
				else if(it == itmax)
					itmax = max_element(it+1, it+1+k);
			}
			nums[nums.size() - k] = *itmax;
			nums.resize(nums.size() + 1 - k);
			return nums;
		}
}
int main(void)
{
	return 0;
}

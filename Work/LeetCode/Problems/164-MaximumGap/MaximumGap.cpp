/*************************************************************************
    > File Name: MaximumGap.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int maximumGap(vector<int>& nums)
		{
			if(nums.size() < 2)
				return 0;
			int distance = 0;
			sort(nums.begin(), nums.end());
			for(int i = 0; i < nums.size()-1; ++i)
				distance = max(distance, nums[i+1] - nums[i]);
			return distance;
		}
};

int main(void)
{
	return 0;
}

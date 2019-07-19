/*************************************************************************
    > File Name: KthLargestElementinanArray.cpp
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
		int findKthLargest(vector<int> &nums, int k)
		{
			sort(nums.begin(), nums.end());
			reverse(nums.begin(), nums.end());
			return nums[k-1];
		}
};

int main(void)
{
	return 0;
}

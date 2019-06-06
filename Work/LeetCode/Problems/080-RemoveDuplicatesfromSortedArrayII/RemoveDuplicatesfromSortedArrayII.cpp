/*************************************************************************
    > File Name: RemoveDuplicatesfromSortedArrayII.cpp
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
		int removeDuplicates1(vector<int>& nums)
		{
			int n = 2;
			for(int i = 2; i < nums.size(); i++)
			{
				if(nums[n-1] == nums[n-2] && nums[i] == nums[n-1])
					continue;
				nums[n++] = nums[i];
			}
			return nums.size() < 2 ? nums.size() : n;
		}
		int removeDuplicates2(vector<int>& nums)
		{
			if(nums.empty() || nums.size() == 0)
				return 0;
			if(nums.size() == 1)
				return 1;
			int ind = 1;
			bool flag = false;
			int prev = nums[0];
			for(int i = 1; i < nums.size(); )
			{
				if(nums[i] == prev && !flag)
				{
					flag = true;
					nums[ind++] = nums[i++];
				}
				else if(nums[i] == prev && flag)
				{
					while(i < nums.size() && nums[i] == prev)
						i += 1;
				}
				else if(nums[i] != prev)
				{
					flag = false;
					prev = nums[i];
					nums[ind++] = nums[i++];

				}
			}
			return ind;
		}
};
int main(void)
{
	return 0;
}

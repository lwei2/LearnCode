/*************************************************************************
    > File Name: FindMinimuminrotatedSortedArray.cpp
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
		int findMin(vector<int>& nums)
		{
			if(nums[nums.size() - 1] > nums[0] || nums.size() == 1)
				return nums[0];
			int low = 0, high = nums.size() - 1;
			while(low <= high)
			{
				int mid = (low + high)/2;
				if(nums[mid] > nums[mid + 1])
					return nums[mid+1];
				else if(nums[mid] < nums[mid - 1])
					return nums[mid];
				else if(nums[mid] > nums[low])
					low = mid + 1;
				else
					high = mid - 1;
			}
			return nums[0];
		}
};
int main(void)
{
	vector<int> Example1 = {3,4,5,1,2};

	vector<int> Example2 = {3,4,5,1,2};

	return 0;
}

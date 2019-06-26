/*************************************************************************
    > File Name: FindPeakElement.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int FindPeakElement1(vector<int>& nums)
		{
			int size = nums.size();
			for(int i = 1; i < size - 1; i++)
				if(nums[i] > nums[i-1] && nums[i] > nums[i+1])
					return i;
			if(size <= 2)
				if(nums[0] > nums[size-1])
					return 0;
				else
					return size-1;
			else
				if(nums[0] > nums[1])
					return 0;
				else
					return size-1;
		}

	public:
		int findPeakElement2(vector<int>& nums)
		{
			if(nums.size() <= 1)
				return 0;
			int start = 0;
			int end = nums.size() - 1;
			while(start <= end)
			{
				int mid = (end-start)/2 + start;
				if(mid-1>=0)
				{
					if(nums[mid-1] > nums[mid])
						end = mid - 1;
					else
					{
						if(mid == nums.size() - 1 || nums[mid] > nums[mid+1])
							return mid;
						start = mid + 1;
					}
				}
				else if(mid + 1 < nums.size())
				{
					if(nums[mid] > nums[mid+1])
					{
						if(mid == 0 || nums[mid] > nums[mid-1])
							return mid;
						end = mid - 1;
					}
					else
						start = mid + 1;
				}
				else
				{
					cout<<"Error";
				}
			}
			return 0;
		}
};


int main(void)
{
	vector<int> Example1 = {1,2,3,1};
	vector<int> Example2 = {1,2,1,3,5,6,4};

	return 0;
}

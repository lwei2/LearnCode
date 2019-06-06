/*************************************************************************
    > File Name: SearchinRotatedSortedArrayII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
	Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.
		(i.e., [0,0,1,2,2,5,6] might become [2,5,6,0,0,1,2]).
	You are given a target value to search. If found in the array return true, otherwise return false.
	Example 1:
		Input: nums = [2,5,6,0,0,1,2], target = 0
		Output: true
	Example 2:
		Input: nums = [2,5,6,0,0,1,2], target = 3
		Output: false
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		bool search1(vector<int>& nums, int target)
		{
			for(int i = 0; i < nums.size(); i++)
			{
				if(target == nums[i])
					return true;
				else
					continue;
			}
			return false;
		}
		bool search2(vector<int>& nums, int target)
		{
			vector<int>::iterator it;
			it = find(nums.begin(), nums.end(), target);
			if(it != nums.end())
				return true;
			else
				return false;
		}
		bool search3(vector<int>& nums, int target)
		{
			vector<int>::iterator it = nums.begin();
			while(it != nums.end())
			{
				if(target == *it)
					return true;
				++it;
			}
			return false;
		}

};

int main(void)
{
	return 0;
}




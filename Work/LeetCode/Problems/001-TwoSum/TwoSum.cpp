/*************************************************************************
    > File Name: TwoSum.cpp
    > Author: lwei
 ************************************************************************/
/*********************
 * Given an array of integers, find two numbers such that they add up to a specific target number.
 * The function twoSum should return indices of the two numbers such that they add up to the target,
 * where index1 must be less than index2.
 * Please note that your returned answers (both index1 and index2) are not zero-based.
 * You may assume that each input would have exactly one solution.
 * Input: numbers=[2,7,11,15] target=9
 * Output: index1=1, index2=2
 * ********************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;

class Solution
{
	public:
		vector<int> twoSum1(vector<int>&nums,int target)
		{
			vector<int> result;
			int i,j;
			for(i=0;i<nums.size();i++)
			{
				for(j=i+1;j<nums.size();j++)
				{
					if(nums[i]+nums[j]==target)
					{
						result.push_back(i);
						result.push_back(j);
					}
				}
			}
			return result;
		}
		vector<int> twoSum2(vector<int>& nums, int target)
		{
			unordered_map<int, int> mapping;
			for(int i = 0; i < nums.size(); ++i)
			{
				if(mapping.count(target - nums[i]))
					return {i, mapping[target - nums[i]]};
				mapping[nums[i]] = i;
			}
			return {};
		}
		vector<int> twoSum3(vector<int>& nums, int target)
		{
			unordered_map<int, int> hash;
			vector<int> result;
			for(int i = 0; i < nums.size(); i++)
			{
				int searched = target - nums[i];
				if(hash.find(searched)!=hash.end())
				{
					result.push_back(hash[searched]);
					result.push_back(i);
					return result;
				}
				hash[nums[i]] = i;
			}
			return result;
		}
		vector<int> twoSum4(vector<int>& nums, int target)
		{
			vector<int> result;
			if(nums.size() < 2)
				return result;
			vector<int> array(nums);
			sort(array.begin(), array.end());
			result.reserve(2);
			int begin = 0;
			int end = array.size() - 1;
			while(begin < end)
			{
				int sum = array[begin] + array[end];
				if(sum == target)
				{
					break;
				}
				else if(sum < target)
				{
					++begin;
				}
				else
				{
					--end;
				}
			}
			if(begin > end)
				return result;
			for(int i = 0; static_cast<size_t>(i) < nums.size(); ++i)
			{
				if(result.size() == 2)
					break;
				if(array[begin] == array[end])
				{
					if(array[begin] == array[i])
						result.push_back(i);
				}
				else
				{
					if(array[begin] == nums[i] && (array.empty() || nums[i] != nums[result.back() - 1]))
						result.push_back(i);
					if(array[end] == nums[i] && (array.empty() || nums[i] != nums[result.back() - 1]))
						result.push_back(i);
				}
			}
			return result;
		}
		vector<int> twoSum5(vector<int>& nums, int target)
		{
			vector<int> result;
			map<int, int> mapping;
			for(int i = 0; i < nums.size(); i++)
				mapping[nums[i]] = i;
			for(int i = 0; i < nums.size(); i++)
			{
				int searched = target - nums[i];
				if(mapping.count(searched) && i!= mapping[searched])
				{
					result.push_back(i);
					result.push_back(mapping[searched]);
					break;
				}
			}
			return result;
		}
};

int main(void)
{
	return 0;
}

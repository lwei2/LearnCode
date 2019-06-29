/*************************************************************************
    > File Name: MajorityElement.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int majorityElement1(vector<int>& nums)
		{
			int res = nums.size();
			sort(nums.begin(), nums.end());	
			return nums[res/2];
		}

	public:
		int majorityElement2(vector<int>& nums)
		{
			int maxElement = nums[0];
			int half = nums.size()/2;
			map<int, int> seen;
			seen[nums[0]] = 1;
			for(int i = 1; i < nums.size(); ++i)
			{
				int num = nums[i];
				seen[num] = seen[num] + 1;
				if(seen[num] > seen[maxElement])
				{
					maxElement = num;
					if(seen[maxElement] > half)
						return maxElement;
				}
			}
			return maxElement;
		}

	public:
		int majorityElement3(vector<int>& nums)
		{
			std::partial_sort(nums.begin(), nums.begin + nums.size()/2 + 1, nums.end());
			return nums[nums.size()/2];
		}
};

int main(void)
{
	vector<int> Example1 = {3,2,3};
	vector<int> Example2 = {2,2,1,1,1,2,2};
	Solution s;
	s.majorityElement(Example1);
	s.majorityElement(Example2);

	return 0;
}

/*************************************************************************
    > File Name: ContainsDuplicate.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Solution
{
	public:
		bool containsDuplicate1(vector<int> &nums)
		{
			map<int, int> m;
			for(int i = 0; i < nums.size(); i++)
			{
				m[nums[i]]++;
				if(m[nums[i]]>1)
					return true;
			}
			return false;
		}

	public:
		bool containsDuplicate2(vector<int> &nums)
		{
			sort(nums.begin(), nums.end());
			for(int i = 1; i < nums.size(); i++)
			{
				if(nums[i] == nums[i-1])
					return true;
			}
			return false;
		}
};
int main(void)
{
	vector<int> Example1 = {1,2,3,1};
	Solution s;
	s.containsDuplicate1(Example1);

	return 0;
}

/*************************************************************************
    > File Name: ContainsDuplicateII.cpp
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
		bool containsNearbyDuplicate1(vector<int> &nums, int k)
		{
			unordered_map<int, int> helper;
			for(int i = 0; i < nums.size(); i++)
			{
				helper[nums[i]]++;
				if(i-1 >= k)
					helper[nums[i-1-k]]--;
				if(helper[nums[i]] > 1)
					return true;
			}
			return false;
		}
}
int main(void)
{
	vector<int> Example1;
	return 0;
}

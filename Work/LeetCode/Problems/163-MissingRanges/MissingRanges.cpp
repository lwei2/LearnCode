/*************************************************************************
    > File Name: MissingRanges.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<string> findMissingRanges(vector<int>& nums,int lower, int uppper)
		{
			vector<string> res;
			long expected = lower, newUpper = upper;
			for(int i = 0; i <=nums.size(); ++i)
			{
				if(i < nums.size() && nums[i] < expected)
					continue;
				long val = (i==nums.size()) ? newUpper + 1 : nums[i];
				if(expected != val && expected + 1 == val)
				{
					res.push_back(to_string(expected));
				}
				else if(expected != val)
				{
					res.push_back(to_string(expected)+"->"+to_string(val-1));
				}
				expected = val + 1;
			}
			return res;
		}
}

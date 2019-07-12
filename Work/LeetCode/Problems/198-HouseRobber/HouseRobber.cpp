/*************************************************************************
    > File Name: HouseRobber.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int rob(vector<int>& nums)
		{
			int len = nums.size();
			if(0 == len)
				return NULL;
			if(1 == len)
				return nums[0];
			if(2 == len)
				return max(nums[0], nums[1]);

			int res;
			int m1 = nums[0], m2 = nums[1];
			for(int i = 2; i < len; i++)
			{
				res = max(m1 + nums[i], m2);
				m1 = max(m1,m2);
				m2 = res;
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

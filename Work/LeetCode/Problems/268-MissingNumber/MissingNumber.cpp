/*************************************************************************
    > File Name: MissingNumber.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int missingNumber(vector<int> &nums)
		{
			int n = nums.size();
			long res = n*(n+1);
			for(auto num: nums)
				res = res - num;
			return res;
		}
		int missingNumber1(vector<int> &nums)
		{
			int res = nums.size();
			for(int i = 0; i < nums.size(); i++)
			{
				res = res ^ i;
				res = res ^ nums[i];
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

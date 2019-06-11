/*************************************************************************
    > File Name: SingleNumberII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		int singleNumber(vector<int>& nums)
		{
			int res = 0;
			for(int i = 0; i < nums.size(); i++)
			{
				if(count(nums.begin(), nums.end(), nums[i]) == 1)
					res = nums[i];
				else
					continue;
			}
			return res;
		}
};
int main(void)
{
	return 0;
}

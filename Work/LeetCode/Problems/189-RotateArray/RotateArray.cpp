/*************************************************************************
    > File Name: RotateArray.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		void rotate(vector<int>& nums, int k)
		{
			k = k % nums.size();
			vector<int> tmp(rbegin(nums), rbegin(nums) + k);
			copy(rbegin(nums) + k, rend(nums), rbegin(nums));
			copy(rbegin(tmp),rend(tmp),begin(nums));
		}
};

int main(void)
{
	int k = 3;
	vector<int> Exmaple = {1,2,3,4,5,6,7};

	return 0;
}

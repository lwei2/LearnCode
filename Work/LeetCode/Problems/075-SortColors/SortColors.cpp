/*************************************************************************
    > File Name: SortColors.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		void sortColors1(vector<int>& nums)
		{
			for(int i = 0; i < nums.size(); i++)
			{
				for(int j = i + 1; j < nums.size(); j++)
				{
					if(nums[i] <= nums[j])
						continue;
					else
					{
						int tmp = nums[i];
						nums[i] = nums[j];
						nums[j] = tmp;
					}
				}
			}
		}
		void sortCorlors2(vector<int>& nums)
		{
			int n = nums.size(); 
			if(n < 2)
				return ;
			int m = 0;
			int s = 0;
			int e = n - 1;
			while(m <= e && s <= e)
			{
				if(nums[m] == 2)
				{
					int tmp = nums[m];
					nums[m] = nums[e];
					nums[e] = tmp;
				}
				if(nums[m] == 0)
				{
					int tmp = nums[s];
					nums[s] = nums[m];
					nums[m] = tmp;
				}
				if(m < s || nums[m] == 1)
					++m;
			}
		}
};


int main(void)
{
	return 0;
}




/*************************************************************************
    > File Name: MajorityElementII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<int> majorityElement1(vector<int> &nums)
		{
			map<int, int> m;
			vector<int> res;
			for(auto ele : nums)
				m[ele] += 1;
			for(auto it : m)
				if(it.second > nums.size()/3)
					res.push_back(it.first);
			return res;
		}
		vector<int> majorityElement2(vector<int> &nums)
		{
			int majority1 = INT_MAX, majority2 = INT_MAX;
			int votes1 = 0, votes2 = 0;
			for(auto num : nums)
			{
				if(num == majority1)
					votes1++;
				else if(num == majority2)
					votes2++;
				else if(votes1 == 0)
				{
					majority1 = num;
					votes1 = 1;					
				}
				else if(votes2 == 0)
				{
					majority2 = num;
					votes2 = 1;
				}
				else
				{
					votes1--;
					votes2--;
				}
			}
			votes1 = 0, votes2 = 0;
			for(auto num : nums)
			{
				if(num == majority1)
					votes1++;
				else if(num == majority2)
					votes2++;
			}
			vector<int> res;
			if(votes1 > nums.size()/3.0)
				res.push_back(majority1);
			if(votes2 > nums.size()/3.0)
				res.push_back(majority2);
			return res;
		}
};


int main(void)
{
	return 0;
}

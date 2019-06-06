/*************************************************************************
    > File Name: Subsets.cpp
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
		vector<vector<int> >subsets(vector<int>& nums)
		{
			vector<vector<int> > result = {{}};
			for(int i = 0; i < nums.size(); i++)
			{
				int count = result.size();
				vector<vector<int> >tmp(result);
				result.insert(result.end(),tmp.begin(),tmp.end());
				for(int j = 0; j < count; j++)
				{
					result[j].push_back(nums[i]);
				}
			}
			return result;
		}
};

int main(void)
{
	return 0;
}

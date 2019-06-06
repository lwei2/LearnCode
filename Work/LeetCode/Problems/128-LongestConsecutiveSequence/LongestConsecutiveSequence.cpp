/*************************************************************************
    > File Name: LongestConsecutiveSequence.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		int longestConsecutive(vector<int>& nums)
		{
			int best = 0;
			unordered_set<int> uset(nums.begin(), nums.end());
			for(auto it = uset.begin(); it!=uset.end(); ++it)
			{
				if(uset.find(*it+1) == uset.end())
				{
					int tmp = *it - 1;
					while(uset.find(tmp)!=uset.end())
						--tmp;
					best = max(best, *it - tmp);
				}
			}
			return best;
		}
};

int main(void)
{
	return 0;
}

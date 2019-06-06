/*************************************************************************
    > File Name: SubsetsII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<vector<int> > subsetsWithDup(vector<int>& nums)
		{
			vector<vector<int> > result;
			result.push_back({});
			if(nums.size() == 0)
				return result;

			vector<numcount*> numsinfo;
			unordered_map<int, numcount*> map;

			for(int i = 0; i < nums.size(); ++i)
			{
				if(map.count(nums[i]) == 0)
				{
					numcount *p = new numcount(nums[i],1);
					map[nums[i]] = p;
					numsinfo.push_back(p);
				}
				else
				{
					map[nums[i]]->count++;
				}
			}

			int length = numsinfo.size();
			int prev_size = 1;
			for(int i = 0; i < length; ++i)
			{
				int tmp = numsinfo[i]->val;
				int tmp_count = numsinfo[i]->count;
				for(int j = 0; j < prev_size; ++j)
				{
					vector<int> t = result[j];
					for(int k = 1; k <= tmp_count; ++k)
					{
						t.push_back(tmp);
						result.push_back(t);
					}
				}
				prev_size *= (tmp_count + 1);
			}
			return result;
		}
	private:
		struct numcount
		{
			int val;
			int count;
			numcount(int _val, int _count):val(_val),count(_count)
			{

			}
		};
};

int main(void)
{
	return 0;
}


class Solution
{
	public:
		int removeDuplicates(vector<int>& nums)
		{
			vector<int>::iterator newNums = unique(nums.begin(),nums.end());
			return distance(nums.begin(),newNums);
		}
};

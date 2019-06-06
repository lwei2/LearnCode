

class Solution
{
	public:
		int maxSubArray(vector<int>& nums)
		{
			int i,j;
			int sum = 0;
			int result = nums[0];
			for(i = 0; i < nums.size(); i++)
			{
				sum+=nums[i];
				result = max(sum,result);
				sum = max(sum,0);
			}
			return result;
		}
};

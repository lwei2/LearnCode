
class Solution
{
	public:
		vector<vector<int> > threeSum(vector<int>& nums)
		{
			vector<vector<int> > result;
			if(nums.size()<3)
			  return result;
			sort(nums.begin(),nums.end());
			for(int i = 0; i < nums.size(); i++)
			{
				int sum = -nums[i],left = i + 1, right = nums.size() - 1;
				if(i > 0 && nums[i] == nums[i - 1])
					continue;
				while(left < right)
				{
					if(nums[left] + nums[right] > sum)
						right--;
					else if(nums[left] + nums[right] < sum)
						left++;
					else if(nums[left] + nums[right] == sum)
					{
						result.push_back(vector<int>{nums[i],nums[left],nums[right]});
						left++;
						right--;
					}
				}	
			}
			sort(result.begin(),result.end());
			result.erase(unique(result.begin(),result.end()),result.end());
			return result;
		}
};

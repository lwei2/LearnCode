

class Solution
{
	public:
		int searchInsert(vector<int>& nums, int target)
		{
			if(nums.size() == 0)
				return 0;
			unsigned int i;
			int len = nums.size();
			for(i = 0; i < len; i++)
			{
				if(nums[i] == target)
					return i;
				else
				{
					if(nums[0] > target)
					{
						nums.insert(nums.begin(), target);
						return 0;
					}
					else if(nums[len - 1] < target)
					{
						nums.push_back(target);
						return len;
					}
					else
					{
						if(nums[i] > target)
						{
							nums.insert(nums.begin() + i, target);
							return i;
						}
					}
				}
			}
		}
};

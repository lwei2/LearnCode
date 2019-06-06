class Solution
{
	public:
		vector<vector<int> >fourSum(vector<int>&nums, int target)
		{
			vector<vector<int> > result;
			if(nums.size()<4)
				return result;
			sort(nums.begin(), nums.end());
			for(int i = 0; i < nums.size() - 3; i++)
			{
				if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
					break;
				if(nums[i]+nums[nums.size()-1]+nums[nums.size()-2]+nums[nums.size()-3]<target)
					continue;
				for(int j = i + 1; j < nums.size() - 2; j++)
				{
					int head = j + 1;
					int tail = nums.size() - 1;
					while(head<tail)
					{
						int sum = nums[i]+nums[j]+nums[head]+nums[tail];
						if(sum>target)
							tail--;
						else if(sum<target)
							head++;
						else
						{
							vector<int> temp(4,0);
							temp[0] = nums[i];
							temp[1] = nums[j];
							temp[2] = nums[head];
							temp[3] = nums[tail];
							result.push_back(temp);
							while(head<tail&&temp[2] == nums[head])
								head++;
							while(head<tail&&temp[3] == nums[tail])
								tail--;
						}
					}
					while(j+1<nums.size() && nums[j] == nums[j+1])
							j++;
				}
				while(i+1<nums.size()&&nums[i] == nums[i+1])
					i++;
			}		
			return result;
		}

};	

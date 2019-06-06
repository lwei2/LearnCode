

#ifndef METHOD1
class Solution
{
	public:
		int removeElement(vector<int>& nums, int val)
		{
			unsigned int i = 0;
			for(unsigned int j = 0; j < nums.size(); j++)
			{
				if(nums[j] != val)
				{
					nums[i] = nums[j];
					i++;
				}
			}
			return i;
		}
};
#else
class Solution
{
	public:
		int removeElement(vector<int>& nums,int val)
		{
			int i = 0;
			int n = nums.size();
			while(i < n)
			{
				if(nums[i] == val)
				{	
					nums[i] = nums[n-1];
					n--;
				}
				else
				{
					i++;
				}
		
			}
			return n;
		 }
		
};

#endif

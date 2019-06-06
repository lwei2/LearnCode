class Solution
{
    public:
        int jump(vector<int>& nums)
        {
           int next = nums[0];
           int prior = next;
           int jumps = 0;
           for(int i = 1; i < nums.size(); ++i)
           {
               if(--next<nums[i])
                   next = nums[i];
               if(i == prior || i == nums.size() - 1)
               {
                   jumps++;
                   prior += next;
               }
           }
           return jumps;
        }
};

class Solution
{
    public:
        int search(vector<int>& nums, int target)
        {
            int i=0;
            int len = nums.size() - 1;
            while(i <= len)
            {
                int mid = (i+len)/2;
                if(target == nums[mid])
                    return mid;
                if(nums[mid] > nums[len])
                {
                    if(target<nums[mid] && target>=nums[i])
                        len = mid - 1;
                    else
                         i = mid + 1;
                }
                else if(nums[mid] < nums[i])
                {
                    if(target>nums[mid] && target<=nums[len])
                        i = mid+1;
                    else
                        len = mid - 1;
                }
                else
                {
                    if(target<nums[mid])
                        len = mid - 1;
                    else
                        i = mid + 1;
                }
            }
            return -1;
        }
}

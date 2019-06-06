#ifndef _METHOD
class Solution
{
    public:
        int firstMissingPositive(vector<int>&nums)
        {
            for(int i = 0; i < nums.size(); ++i)
                while(nums[i] > 0 && nums[i]<=nums.size() && nums[nums[i]-1] != nums[i])
                    swap(nums[i],nums[nums[i]-1]);
            for(int i = 0; i < nums.size(); ++i)
                if(nums[i] != i+1)
                    return i+1;

            return nums.size()+1;

        }
};
#elif
class Solution
{
    public;
        int firstMissingPositive(vector<int>& nums)
        {
            int n = nums.size();
            std::vector<bool> v(n,false);
            for(auto elem:nums)
            {
                if(elem > 0 && elem <= n)
                    v.at(elem-1) = true;
            }
            auto it = std::find(std::begin(v),std::end(v),false);
            int result = std::distance(std::begin(v),it);
            return result + 1;
        }
};

#else

#endif


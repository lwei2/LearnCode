/*************************************************************************
    > File Name: FindMinimuminrotatedSortedArrayII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		int findMin1(const vector<int>& nums)
		{
			int left = 0;
			int right = nums.size() - 1;
			while(left + 1 < right)
			{
				int mid = left + (right - left)/2;
				if(nums[mid] < nums[left])
					right= mid;
				else if(nums[mid] > nums[right])
					left = mid;
				else
					return min(findMin1(vector<int>(nums.begin() + left, nums.begin() + mid)),findMin1(vector<int>(nums.begin() + mid, nums.begin() + right)));
			}
			return min(nums[left],nums[right]);
		}

};
int main(void)
{
	vector<int> Example1 {1,3,5};
	vector<int> Example2 {2,2,2,0,1};
	Solution s;
	int res1 = s.findMin1(Example1);
	int res2 = s.findMin1(Example2);
	cout<<"res1:"<<res1<<",res2:"<<res2<<endl;
	return 0;
}

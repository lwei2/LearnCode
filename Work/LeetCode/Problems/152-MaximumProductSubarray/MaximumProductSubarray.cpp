/*************************************************************************
    > File Name: MaximumProductSubarray.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		int maxProduct1(vector<int>& nums)
		{
			int ans = 0;
			int res = nums[0];
			int product = 1;
			for(int n: nums)
			{
				product *= n;
				res = max(res, product);
				if(product < 0)
				{
					if(ans == 0)
						ans = product;
					else
						res = max(res, product/ans);
				}
				if(product == 0)
				{
					product = 1;
					ans = 0;
				}
			}
			return res;
		}
};

int main(void)
{
	vector<int> Example1 = {2,3,-2,4};
	vector<int> Example2 = {-2,0,-1};
	
	Solution s;
	int res1 = s.maxProduct1(Example1);
	int res2 = s.maxProduct1(Example2);
	cout<<"res1 = "<<res1<<",res2 = "<<res2<<endl;
	return 0;
}

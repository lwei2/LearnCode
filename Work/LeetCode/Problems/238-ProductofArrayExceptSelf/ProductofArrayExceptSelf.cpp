/*************************************************************************
    > File Name: ProductofArrayExceptSelf.cpp
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
		vector<int> productExceptSelf(vector<int> &nums)
		{
			size_t n = nums.size();
			vector<int> result(n, 1);
			for(int i = 1; i < n; ++i)
				result[i] = result[i-1]*nums[i-1];
			int productFromLast = 1;
			for(int i = n - 1; i >= 0; --i)
			{
				result[i] = result[i]*productFromLast;
				productFromLast = productFromLast*nums[i];
			}
			return result;
		}
};

int main(void)
{
	return 0;
}


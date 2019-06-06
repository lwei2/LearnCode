/*************************************************************************
    > File Name: GrayCode.cpp
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
		vector<int> grayCode(int n)
		{
			int cur = 0;
			vector<int> ans;
			ans.push_back(cur);
			for(int i = 0; i < n; i++)
			{
				cur = 1 << i;
				int cur_size = ans.size();
				for(int j = cur_size - 1; j >= 0; j--)
				{
					ans.push_back(ans[j] + cur);
				}
			}
			return ans;
		}
};

int main(void)
{
	return 0;
}

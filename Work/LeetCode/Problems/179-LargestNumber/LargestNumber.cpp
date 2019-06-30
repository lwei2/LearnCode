/*************************************************************************
    > File Name: LargestNumber.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		string largestNumber(vector<int>& nums)
		{
			auto lambda=[] (auto n1, auto n2)
			{
				auto s1 = std::to_string(n1);
				auto s2 = std::to_string(n2);
				int i = 0, j = 0;
				while(s1[i] == s2[j] && (i < s1.size() - 1 || j < s2.size() - 1))
				{
					i++;
					j++;
					i = i % s1.size();
					j = j % s2.size();
				}
				return s1[i] > s2[j];
			};
			string ans;
			sort(nums.begin(), nums.end(), lambda);
			for(auto num: nums)
			{
				ans.append(std::to_string(num));
			}
			if(ans[0] == '0')
				ans = '0';
			return ans;
		}
};

int main(void)
{
	vector<int> Example1 = {10,2};
	vector<int> Example1 = {3,30,34,5,9};
	Solution s;
	cout<<s.largestNumber(Example1)<<endl;
	cout<<s.largestNumber(Example2)<<endl;
	return 0;
}

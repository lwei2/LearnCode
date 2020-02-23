/*************************************************************************
    > File Name: Pro1033_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int getAns(vector<string> &nums)
{
	int ans = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		for(int j = i + 1; j < nums.size(); j++)
		{
			string tmp = nums[i] + nums[j];
			set<char> s(tmp.begin(), tmp.end());
			if(s.size() == tmp.size())
				ans = max(int(nums[i].size()*nums[j].size()),ans);
		}
	}
	return ans;
}

int main(void)
{
	string input;
	while(getline(cin,input))
	{
		input = input.substr(1,input.size() - 2);
		vector<string> nums;
		int i = 0;
		while(i < input.size())
		{
			int pos = input.find(',', i);
			if(-1 == pos)
				pos = input.size();
			string tmp = input.substr(i + 1, pos - i - 2);
			nums.push_back(tmp);
			i = pos + 1;
		}
		cout<<getAns(nums)<<endl;
	}
	return 0;
}

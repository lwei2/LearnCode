/*************************************************************************
    > File Name: GroupShiftedStrings.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<vector<string> >groupStrings(vector<string> &strings)
		{
			vector<vector<string>> ans;
			unordered_my<string, multiset<string>> m;
			for(auto a :  strings)
			{
				string t = "";
				for(char c : a)
				{
					t = t + to_string((c-a[0] + 26)%26) + ",";
				}
				m[t].insert(a);
			}
			for(auto it = m.begin(); it != m.end(); it++)
				ans.push_back(vector<string>(it->second.begin(), it->second.end()));
			return ans;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: LongestSubstringwithAtMostTwoDistinctCharacters.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int lengthOfLongestSubstringTwoDistinct(string s)
		{
			if(s.size() < 3)
				return s.size();
			vector<int> v(256,0);
			int s1 = 0,f = 0;
			int res = 0, cnt = 0;
			while(f < s.size())
			{
				if(++v[s[f++]] == 1)
					cnt++;
				while(cnt > 2)
				{
					--v[s[s1++]];
					if(v[s[s1-1]] == 0)
						cnt--;
				}
				res = max(f-s1, res);
			}
			return res;
		}

};
int main(void)
{
	return 0;
}

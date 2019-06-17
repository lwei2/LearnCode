/*************************************************************************
    > File Name: WordBreakII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
	public:
		unordered_map<string, vector<string> >m;
		vector<string> wordBreak(string s, vector<string>& wordDict)
		{
			if(m.count(s))
				return m[s];
			if(s.empty())
				return {""};
			vector<string> res;
			for(string word : wordDict)
			{
				if(s.substr(0,word.size())!=word)
					continue;
				vector<string> ans = wordBreak(s.substr(word.size()),wordDict);
				for(string t : ans)
					res.push_back(word +(t.empty() ? "" : " ") + t);
			}
			return m[s] = res;
		}
};
int main(void)
{
	return 0;
}

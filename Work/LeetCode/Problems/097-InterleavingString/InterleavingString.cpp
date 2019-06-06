/*************************************************************************
    > File Name: InterleavingString.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <deque>
using namespace std;

class Solution
{
	public:
		bool isInterleave(string s1, string s2, string s3)
		{
			if(s3.size() != s1.size() + s2.size())
				return false;
			deque<int> pos = {0};
			int len = 0;
			while(!pos.empty())
			{
				if(len == s3.size())
					return true;
				auto sz = pos.size();
				for(auto i = 0; i < sz; ++i)
				{
					auto p = pos.front();
					pos.pop_front();
					if(len - p < s2.size() && s2[len-p] == s3[len] && (i == 0 || p!=pos.back()))
						pos.push_back(p);
					if(p < s1.size() && s1[p] == s3[len])
						pos.push_back(p+1);
				}
				++len;
			}
			return false;
		}
};
int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: RestoreIPAddresses.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solutioin
{
	public:
		void helper(string const &s, string &tmp, int pos, int seg, vector<string> &result)
		{
			if(seg == 0 && pos == s.size())
			{
				result.push_back(tmp);
				return;
			}
			else if(seg == 0)
				return;
			for(int l = 1; l <= 3 && pos + l <= s.size(); ++l)
			{
				if(l == 3 && s.substr(pos, 3) > "255")
					continue;
				if(s[pos] == '0' && l != 1)
					continue;
				string origtmp = tmp;
				if(seg == 4)
					tmp += s.substr(pos,l);
				else
					tmp += "."+s.substr(pos,l);
				helper(s,tmp,pos+l,seg-1,result);
				tmp = origtmp;
			}
		}
		vector<string> restoreIpAddresses(string s)
		{
			vector<string> result;
			string tmp;
			helper(s, tmp, 0, 4, result);
			return result;
		}
};

int main(void)
{
	return 0;
}

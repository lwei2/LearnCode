/*************************************************************************
    > File Name: IsomorphicStrings.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
	public:
		bool isIsomorphic(string s, string t)
		{
			if(s.size() != t.size())
				return false;
			int aMap1[256];
			for(int i = 0; i < 256; i++)
				aMap1[i] = -1;

			int aMap2[256];
			for(int i = 0; i < 256; i++)
				aMap2[i] = -1;

			unsigned int aIndexS = 0;
			unsigned int aIndexT = 0;
			for(int i = 0; i < s.size(); i++)
			{
				aIndexS = s[i];
				aIndexT = t[i];
				if(aMap1[aIndexS] != aMap2[aIndexT])
					return false;
				aMap1[aIndexS] = i;
				aMap2[aIndexT] = i;
			}
			return true;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: ScrambleString.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Solution
{
	public:
		bool isScramble(string s1, string s2)
		{
			if(s1.length() != s2.length())
				return false;
			if(s1 == s2)
				return true;
			int check[26] = {0};
			for(int i = 0; i < s1.length(); ++i)
			{
				++check[s1[i] - 'a'];
				--check[s2[i] - 'a'];
			}
			for(int i = 0; i < 26; ++i)
			{
				if(check[i] != 0)
					return false;
			}
			for(int i = 1; i < s1.size(); i++)
			{
				if((isScramble(s1.substr(0,i),s2.substr(0,i)) && isScramble(s1.substr(i),s2.substr(i))) || (isScramble(s1.substr(0,i), s2.substr(s1.size() - i)) && isScramble(s1.substr(i),s2.substr(0, s1.size() - i))))
					return true;
			}
			return false;
		}
}
int main(void)
{
	return 0;
}

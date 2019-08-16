/*************************************************************************
    > File Name: ValidAnagram.cpp
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
		bool isAnagram(string s, string t)
		{
			map<char,int> m;
			for(auto i : s)
				m[i]+=1;
			for(auto i : t)
			{
				if(m[i] == 0)
					return false;
				m[i]--;
			}
			return (s.size() == t.size()) ? true:false;
		}
};

int main(void)
{
	return 0;
}

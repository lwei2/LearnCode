/*************************************************************************
    > File Name: Pro18.8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Substr
{
	public:
		vector<bool>chkSubStr(vector<string> p, int n, string s)
		{
			vector<bool> result;
			for(int i = 0; i < n; ++i)
			{
				if(s.find(p[i]) != -1)
					result.push_back(true);
				else
					result.push_back(false);
			}
			return result;
		}
};

int main(void)
{
	return 0;
}

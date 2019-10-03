/*************************************************************************
    > File Name: Pro17.9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Frequency
{
	public:
		int getFrequency(vector<string> article, int n, string word)
		{
			int res = 0;
			for(auto str : article)
			{
				if(word == str)
					++res;
			}
			return res;
		}
};


int main(void)
{
	return 0;
}

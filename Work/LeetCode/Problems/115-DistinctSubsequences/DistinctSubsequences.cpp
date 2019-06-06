/*************************************************************************
    > File Name: DistinctSubsequences.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int numDistinct(string s, string t)
		{
			vector<uint64_t> threads(t.size(), 0);
			for(int i = 0; i < (int)s.size(); i++)
			{
				for(int j = threads.size() - 1; j >= 0; j--)
				{
					if(t[j] == s[i])
						if(j == 0) 
							threads[j]++;
						else
							threads[j] += threads[j-1];
				}
			}
			return threads.back();
		}
};


int main(void)
{
	return 0
}

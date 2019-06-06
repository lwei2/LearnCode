/*************************************************************************
    > File Name: Combinations.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Solution
{
	public:
		vector<vector<int> > combine(int n, int k)
		{
			vector<vector<int> >result;
			int i = 0;
			vector<int> p(k, 0);
			while(i >= 0)
			{
				p[i]++;
				if(p[i] > n)
					--i;
				else if(i == k - 1)
					result.push_back(p);
				else
				{
					++i;
					p[i] = p[i-1];
				}
			}
			return result;
		}
};



int main(void)
{
	return 0;
}

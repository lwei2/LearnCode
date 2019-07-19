/*************************************************************************
    > File Name: CombinationSumIII.cpp
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
		vector<vector<int> > combinationSum3(int k, int n)
		{
			vector<int> tmp(k, 0);
			vector<vector<int> > res;
			int i = 0;
			while(i >= 0)
			{
				tmp[i]++;
				n--;
				if(tmp[i] > 9 || n < 0)
				{
					n += tmp[i];
					i--;
				}
				else if(i == k - 1)
				{
					if(0 == n)
					{
						res.push_back(tmp);
					}
				}
				else
				{
					i++;
					tmp[i] = tmp[i-1];
					n -= tmp[i];
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

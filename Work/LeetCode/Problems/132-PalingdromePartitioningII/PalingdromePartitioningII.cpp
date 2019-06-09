/*************************************************************************
    > File Name: PalingdromePartitioningII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int minCut(string s)
		{
			int sz = s.size();
			vector<int> min_cut(sz+1, sz-1);
			vector<vector<bool> >palin(sz, vector<bool>(sz,false));

			min_cut[0] = -1;
			for(int i = 0; i < sz; ++i)
			{
				for(int j = 0; j <= i; ++j)
				{
					if(s[j] == s[i] && (i - j < 2 || palin[j+1][i-1]))
					{
						palin[j][i] = true;
						min_cut[i+1] = min(min_cut[i+1],min_cut[j] + 1);
					}
				}
			}
			return min_cut[sz];
		}

	public:
		int minCut(string s)
		{
			int sz = s.size();
			vector<int> min_cut(sz+1, sz-1);
			vector<bool> palin_prev(sz, false);

			min_cut[0] = -1;
			for(int i = 0; i < sz; ++i)
			{
				vector<bool> palin_curr(sz, false);
				for(int j = 0; j <= i; ++j)
				{
					if(s[j] == s[i] && (i - j < 2 || palin_prev[j+1]))
					{
						palin_curr[j] = true;
						min_cut[i+1] = min(min_cut[i+1], min_cut[j]+1);
					}
				}
				swap(palin_curr, palin_prev);
			}
			return min_cut[sz];
		}
}

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: PalingdromePartitioning.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution
{
	public:
		void slove(int begin, vector<string> v, vector<vector<string> >& result)
		{
			for(int i = begin; i < (int)v.size(); i++)
			{
				if(i > 0 && i < v.size() - 1 && v[i-1] == v[i+1])
				{
					string str = v[i-1] + v[i] + v[i+1];
					vector<string> tmp(v.begin(), v.end());
					tmp[i] = str;
					tmp.erase(tmp.begin() + i + 1);
					tmp.erase(tmp.begin() + i - 1);
					slove(i-1, tmp, result);
				}
				if(i > 0 && v[i].length() == 1 && v[i] == v[i-1])
				{
					string str = v[i-1] + v[i];
					vector<string> tmp(v.begin(), v.end());
					tmp[i] = str;
					tmp.erase(tmp.begin() + i - 1);
					slove(i - 1, tmp, result);
				}
			}
			result.push_back(v);
		}
		vector<vector<string> > partition(string s)
		{
			vector<vector<string> > result;
			vector<string> v;
			for(int i = 0; i < s.length(); i++)
				v.push_back(s.substr(i,1));
			slove(0, v, result);
			return result;
		}
};

int main(void)
{
	return 0;
}

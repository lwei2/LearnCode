/*************************************************************************
    > File Name: Candy.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
	public:
		int candy(vector<int>& ratings)
		{
			vector<int> ret(ratings.size(), 1);
			for(int i = 0; i < ratings.size() - 1; ++i)
			{
				if(ratings[i] == ratings[i+1])
					continue;
				else if(ratings[i] > ratings[i+1] && ret[i] <= ret[i+1])
					ret[i] = ret[i+1] + 1;
				else if(ratings[i] < ratings[i+1] && ret[i] >= ret[i+1])
					ret[i+1] = ret[i] + 1;
			}
			for(int i = ratings.size() - 2 ; i >= 0; --i)
			{
				if(ratings[i] == ratings[i+1])
					continue;
				else if(ratings[i] > ratings[i+1] && ret[i] <= ret[i+1])
					ret[i] = ret[i+1] + 1;
				else if(ratings[i] < ratings[i+1] && ret[i] >= ret[i+1])
					ret[i+1] = ret[i] + 1;

			}
			return accumulate(ret.begin(), ret.end(), 0);
		}

};

int main(void)
{
	return 0;
}

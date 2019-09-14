/*************************************************************************
    > File Name: FactorCombinations.cpp
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
		vector<vector<int> > getFactors1(int	n)
		{
			vector<vector<int> > res;
			vector<int> line;
			dfs(n,  2, res, line);
			return res;
		}
	private:
		void dfs(int n, int factor, vector<vector<int> >&res, vector<int> &line)
		{
			if(factor *factor > n)
				return;
			dfs(n, factor + 1, res, line);
			if(n%factor == 0)
			{
				line.push_back(factor);
				line.push_back(n/factor);
				res.push_back(line);
				line.pop_back();
				dfs(n/factor, factor, res, line);
				line.pop_back();
			}
		}

	public:
		vector<vector<int>> getFactors2(int n)
		{
			vector<vector<int>> result;
			vector<int> factors;
			getResult(n,&result, &factors);
			return result;
		}
		void getResult(const int n, vector<vector<int>> *result, vector<int> *factors)
		{
			for(int i = factors->empty() ? 2 : factors->back(); i <= n/i; ++i)
			{
				if(n%i == 0)
				{
					factors->emplace_back(i);
					factors->emplace_back(n/i);
					result->emplace_back(*factors);
					factors->pop_back();
					getResult(n/i, result, factors);
					factors->pop_back();
				}
			}
		}

};



int main(void)
{
	return 0;
}

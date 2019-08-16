/*************************************************************************
    > File Name: DifferentWaystoAddParentheses.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
	public:
		vector<int> diffWaysToComputer(string input)
		{
			vector<int> v;
			vector<char> op;
			if(input.find_first_of("0123456789") == string::npos)
				return vector<int>();
			while(1)
			{
				size_t off = 0;
				int val = stoi(input,&off);
				v.emplace_back(val);
				op.emplace_back(input[off]);
				if(off == input.size())
					break;
				input = input.substr(off+1);
			}
			typedef vector<int> ResultTy;
			vector<vector<ResultTy>> result;
			result.resize(v.size());
			for(auto &r : result)
				r.resize(v.size());
			auto f = [&](int left, int right, int i)
			{
				switch(op[i])
				{
					default:
					case '+':
						return left + right;
					case '-':
						return left - right;
					case '*':
						return left * right;
				}
			};
			vector<pair<int, int>> dfs;
			dfs.push_back(make_pair(0,v.size() - 1));
			while(dfs.size())
			{
				int begin = dfs.back().first;
				int end = dfs.back().second;
				if(result[begin][end].size())
				{
					dfs.pop_back();
					continue;
				}
				if(begin == end)
				{
					result[begin][end].push_back(v[begin]);
					dfs.pop_back();
					continue;
				}
				for(int i = begin; i < end; ++i)
				{
					if(result[begin][i].size() && result[i+1][end].size())
					{
						for(auto &l : result[begin][i])
						{
							for(auto r = result[i+1][end].begin(); r  < result[i+1][end].end();++r)
								result[begin][end].push_back(f(l,*r,i));
						}
					}
					else
					{
						if(result[begin][i].size() == 0)
							dfs.emplace_back(make_pair(begin, i));
						if(result[i+1][end].size() == 0)
							dfs.emplace_back(make_pair(i+1, end));
					}
				}
			}
			return result[0][result.size() - 1];
		}
};


int main(void)
{
	return 0;
}

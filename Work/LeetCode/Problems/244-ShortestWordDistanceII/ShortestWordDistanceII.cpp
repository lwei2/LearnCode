/*************************************************************************
    > File Name: ShortestWordDistanceII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class wordDistance1
{
	public:
		wordDistance1(vector<string> &words)
		{
			for(int i = 0; i < words.size(); ++i)
				m[words[i]].push_back(i);			
		}
		int shortest1(string word1, string word2)
		{
			int res = INT_MAX;
			for(int i = 0; i < m[word1].size(); ++i)
			{
				for(int j = 0; j < m[word2].size(); ++j)
				{
					res = min(res, abs(m[word1][i] - m[word2][j]))					
				}
			}
			return res;
		}
	private:
		unordered_map<string, vector<int>> m;
};

class wordDistance2
{
	public:
		wordDistance2(vector<string> &words)
		{
			for(int i = 0; i < words.size(); ++i)
				m[words[i]].push_back(i);
		}
		int shortest2(string word1, string word2)
		{
			int i = 0;
			int j = 0;
			int res = INT_MAX;
			while(i < m[word1].size() && j < m[word2].size())
			{
				res = min(res, abs(m[word1][i] - m[word2][j]));
				m[word1][i] < m[word2][j] ? ++i : ++j;
			}
			return res;
		}
	private:
		unordered_map<string, vector<int> > m;
};

int main(void)
{
	return 0;
}

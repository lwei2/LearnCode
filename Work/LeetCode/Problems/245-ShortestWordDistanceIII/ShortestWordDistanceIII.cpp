/*************************************************************************
    > File Name: ShortestWordDistanceIII.cpp
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
		int shortestWordDistance1(vector<string> &words, string word1, string word2)
		{
			int res = INT_MAX;
			int p1 = -1, p2 = -1;
			for(int i = 0; i < words.size(); ++i)
			{
				int t = p1;
				if(words[i] == word1)
					p1 = i;
				if(words[i] == word2)
					p2 = i;
				if(p1 != -1 && p2 != -1)
				{
					if(word1 == word2 && t != -1 && t != p1)
						res = min(res, abs(t - p1));
					else if(p1 != p2)
						res = min(res, abs(p1 - p2));
				}
			}
			return res;
		}

	public:
		int shortestWordDistance2(vector<string> &words, string word1, string word2)
		{
			int res = INT_MAX;
			int p1 = words.size(), p2 = -words.size();
			for(int i = 0; i < words.size(); ++i)
			{
				if(words[i] == word1) 
					p1 = word1 == word2 ? p2 : i;
				if(words[i] == word2)
					p2 = i;
				res = min(res, abs(p1 - p2));
			}
			return res;
		}

	public:
		int shortestWordDistance3(vector<string> &words, string word1, string word2)
		{
			int idx = -1;
			int res = INT_MAX;
			for(int i = 0; i < words.size(); ++i)
			{
				if(words[i] == word1 || words[i] == word2)
				{
					if(idx != -1 && (word1 == word2 || words[i] != words[idx]))
						res = min(res, i - idx);
					idx = i;
				}
			}
			return res;
		}
};

int main(void)
{
	return 0;
}

/*************************************************************************
    > File Name: WordLadderII.cpp
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
		bool isAdjacent(const string& a, const string& b)
		{
			int count = 0;
			for(size_t i = 0; i < a.size(); i++)
			{
				if(a[i] != b[i])
					++count;
				if(count == 2)
					break;
			}
			return count == 1 ? true : false;
		}
		vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList)
		{
			unordered_map<int, vector<int> > adj;
			bool endWordPresent = false;
			int beginWordInd = -1, endWordInd = -1;
			for(int i = 0; i < wordList.size(); ++i)
				if(wordList[i] == endWord)
					endWordInd = i;
				else if(wordList[i] == beginWord)
					beginWordInd = i;

			if(endWordInd == -1)
				return {};

			if(beginWordInd == -1)
			{
				wordList.push_back(beginWord);
				beginWordInd = wordList.size() - 1;
			}
			for(size_t i = 0; i < wordList.size(); ++i)
			{
				for(size_t j = i + 1; j < wordList.size(); ++j)
				{
					if(isAdjacent(wordList[i], wordList[j]))
					{
						adj[i].push_back(j);
						adj[j].push_back(i);
					}
				}
			}

			deque<int> queue{{beginWordInd}};
			unordered_map<int, pair<int, vector<vector<string> >>> vis{
				{beginWordInd, {0,{{beginWord}}}}};
			while(!queue.empty())
			{
				auto fr = queue.front();
				if(fr == endWordInd)
					return vis[fr].second;
				queue.pop_front();
				for(size_t i = 0; i < adj[fr].size(); i++)
				{
					auto found = vis.find(adj[fr][i]);
					if(found == end(vis))
					{
						vis.emplace(adj[fr][i], vis[fr]);
						vis[adj[fr][i]].first++;
						for(auto &p : vis[adj[fr][i]].second)
						{
							p.push_back(wordList[adj[fr][i]]);
						}
						queue.push_back(adj[fr][i]);
					}
					else if(found->second.first == vis[fr].first + 1)
					{
						auto visFrontCopy {vis[fr].second};
						for(auto &p : visFrontCopy)
						{
							p.push_back(wordList[adj[fr][i]]);
						}
						copy(begin(visFrontCopy),end(visFrontCopy), back_inserter(vis[adj[fr][i]].second));
					}
				}
			}
			return {};
		}
};

int main(void)
{
	return 0;
}

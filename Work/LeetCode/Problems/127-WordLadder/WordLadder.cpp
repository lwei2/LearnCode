/*************************************************************************
    > File Name: WordLadder.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int ladderLength(string beginWord, string endWord, vector<string>& wordList)
		{
			unordered_map<string, list<int> > wildcardHash;
			unordered_map<int,list<list<int>*>> neighborHash;
			int endIndex = -1;
			for(int w = 0; w < wordList.size(); ++w)
				if(wordList[w] == endWord)
				{
					endIndex = w;
					break;
				}
			if(endIndex < 0)
				return 0;

			for(int w = 0; w < wordList.size(); ++w)
			{
				string &wildcard = wordList[w];
				for(int i = 0; i < wildcard.size(); ++i)
				{
					char c = wildcard[i];
					wildcard[i] = '*';
					auto &entry = wildcardHash[wildcard];
					neighborHash[w].push_back(&entry);
					entry.push_back(w);
					wildcard[i] = c;
				}
			}

			wordList.push_back(beginWord);
			for(int i = 0; i < beginWord.size(); ++i)
			{
				char c = beginWord[i];
				beginWord[i] = '*';
				neighborHash[wordList.size() - 1].push_back(&wildcardHash[beginWord]);
				beginWord[i] = c;
			}

			unordered_set<int> searched;
			int steps = 1;
			queue<int> q;
			q.push(wordList.size() - 1);
			while(q.size() && steps < wordList.size())
			{
				int qsize = q.size();
				steps++;
				for(int i = 0; i < qsize; ++i)
				{
					int wordIdx = q.front();
					q.pop();
					auto &neighborLists = neighborHash[wordIdx];
					for(auto& neighborList : neighborLists)
					{
						for(int neighborIdx : *neighborList)
						{
							if(neighborIdx == wordIdx || searched.count(neighborIdx))
								continue;
							if(neighborIdx == endIndex)
								return steps;
							q.push(neighborIdx);
							searched.insert(neighborIdx);
						}
					}
				}
			}
			return 0;
		}
};

int main(void)
{
	return 0;
}

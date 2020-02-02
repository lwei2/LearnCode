/*************************************************************************
    > File Name: Pro0123_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

unordered_map<string, vector<string>> nexts;
unordered_set<string> strList;
string start, to;
vector<vector<string>> result;
unordered_map<string, int> distances;

void getNexts()
{
	int sz = start.size();
	string str = start;
	for(int i = 0; i < sz; i++)
	{
		for(str[i] = 'a'; str[i] <= 'z'; str[i]++)
		{
			if(str[i] != start[i] && strList.find(str) != strList.end())
			{
				nexts[start].push_back(str);
			}
		}
		str[i] = start[i];
	}
	unordered_set<string>::iterator setIter = strList.begin();
	while(setIter != strList.end())
	{
		sz = setIter->size();
		str = *setIter;
		for(int i = 0; i < sz; i++)
		{
			for(str[i] = 'a'; str[i] <= 'z'; str[i]++)
			{
				if(str[i] != (*setIter)[i] && strList.find(str) != strList.end())
				{
					nexts[*setIter].push_back(str);
				}
			}
			str[i] = (*setIter)[i];
		}
		setIter++;
	}
}

int getDist()
{
	queue<string> q;
	q.push(start);
	distances[start] = 1;
	unordered_set<string> inPath;
	inPath.insert(start);
	string str;
	while(!q.empty())
	{
		str = q.front();
		q.pop();
		for(auto & setIter : nexts[str])
		{
			if(inPath.find(setIter) == inPath.end())
			{
				q.push(setIter);
				inPath.insert(setIter);
				distances[setIter] = distances[str] + 1;
			}
		}
	}
	return distances[to];
}

void getPath(vector<string> &solution, int dist)
{
	string str = solution.back();
	if(str == to)
		result.push_back(solution);
	else
	{
		for(auto & setIter : nexts[str])
		{
			if(distances[str] + 1 == distances[setIter] && 
				(distances[setIter] < dist || distances[setIter] ==dist && setIter == to))
			{
				solution.push_back(setIter);
				getPath(solution,dist);
				solution.pop_back();
			}
		}
	}
}


int main(void)
{
	int n;
	cin>>n;
	
	cin>>start>>to;
	string str;
	for(int i = 0; i < n; i++)
	{
		cin>>str;
		strList.insert(str);
	}
	if(strList.find(to) == strList.end())
	{
		cout<<"NO"<<endl;
		return 0;
	}
	getNexts();
	int dist = getDist();
	if(dist == 0)
		printf("NO\n");
	else
	{
		printf("YES\n");
		vector<string> solution;
		solution.push_back(start);
		getPath(solution, dist);
		vector<string> out;
		for(auto & path : result)
		{
			string s;
			for(int i = 0; i < path.size(); i++)
			{
				if(i == 0)
					s = path[i];
				else
				{
					s += " -> " + path[i];
				}
			}
			out.push_back(s);
		}
		sort(out.begin(), out.end());
		for(auto & path : out)
			cout<<path<<endl;
	}
	return 0;
}

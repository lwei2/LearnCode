/*************************************************************************
    > File Name: TheSkylineProblem.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<vector<int> > getSkyline(vector<vector<int> > &buildings)
		{
			auto cmp = [](pair<int, int> a, pair<int, int> b)
			{
				if(a.first == b.first)
					return a.second > b.second;
				else 
					return a.first < b.first;
			};

			multiset<pair<int, int>, decltype(cmp)> edges(cmp);
			for(auto & ele : buildings)
			{
				edges.insert(make_pair(ele[0],ele[2]));
				edges.insert(make_pair(ele[1],-ele[2]));
			}
			priority_queue<int> pq;
			unordered_map<int, int> pending_delete;
			vector<vector<int> > ans;
			for(auto &e : edges)
			{
				int before = 0;
				if(!pq.empty())
					before = pq.top();
				if(e.second > 0)
					pq.push(e.second);
				else
				{
					pending_delete[-e.second]++;
					while(!pq.empty() && pending_delete[pq.top()])
					{
						pending_delete[pq.top()]--;
						pq.pop();
					}
				}
				int after = 0;
				if(!pq.empty())
					after = pq.top();
				if(before != after)
					ans.push_back({e.first, after});
			}
			return ans;
		}
};

int main(void)
{
	return 0;
}

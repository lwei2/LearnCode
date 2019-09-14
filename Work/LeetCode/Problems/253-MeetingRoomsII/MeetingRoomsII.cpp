/*************************************************************************
    > File Name: MeetingRoomsII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
	public:
		int minMeetingRooms1(vector<vector<int>> & intervals)
		{
			map<int, int>m;
			for(auto a : itervals)
			{
				++m[a[0]];
				--m[a[1]];
			}
			int rooms = 0, res = 0;
			for(auto it : m)
			{
				res = max(res, rooms += it.second);
			}
			return res;
		}
	int minMeetingRooms2(vector<vector<int>> &intervals)
	{
		vector<int> starts, ends;
		int res = 0;
		int endpos = 0;
		for(auto a : intervals)
		{
			starts.push_back(a[0]);
			ends.push_back(a[1]);
		}
		sort(starts.begin(), starts.end());
		sort(ends.begin(), ends.end());
		for(int i = 0; i < intervals.size(); ++i)
		{
			if(starts[i] < ends[endpos])
				++res;
			else
				++endpos;
		}
		return res;
	}

	int minMeetingRooms3(vector<vector<int>> &intervals)
	{
		sort(intervals.begin(), intervals.end(), 
				[](const vector<int>& a, const vector<int>& b{return a[0] < b[0];}));
		priority_queue<int, vector<int>, greater<int>> q;
		for(auto interval : intervals)
		{
			if(!q.empty() && q.top() <= interval[0])
				q.pop();
			q.push(interval[1]);
		}
		return q.size();
	}
};

int main(void)
{
	return 0;
}

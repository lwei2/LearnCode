/*************************************************************************
    > File Name: MeetingRooms.cpp
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
		bool canAttendMeetings(vector<Interval> &intervals)
		{
			sort(intervals.begin(), intervals.end(),[](interval a, interval b){
					return a.start < b.start;
					});
			for(int i = 1; i < intervals.size(); i++)
			{
				if(intervals[i].start < intervals[i-1].end)
					return false;
			}
			return true;
		}
};

int main(void)
{
	return 0;
}

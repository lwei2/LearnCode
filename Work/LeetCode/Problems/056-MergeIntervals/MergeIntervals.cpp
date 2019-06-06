/
 * Definition for an interval.
 * struct Interval{
	int start;
	int end;
	Interval():start(0), end(0){}
	Interval(int s, int e):start(s), end(e){}		 
 *  }
 *
 * 
/
 
class Solution
{
	public:
		vector<Interval> merge(vector<Interval>& intervals)
		{
			int i = 0;
			sort(intervals.begin(), intervals.end(),[](Interval& a, Interval& b){ return a.start < b.start;});
			for(int k = 0; k < intervals.size(); ++k)
			{
				if(intervals[i].end < intervals[k].start)
					intervals[++i] = intervals[k];
				else
					intervals[i].end = max(intervals[k].end, intervals[i].end);
			}
			return intervals.empty()?vector<Interval>{}:vector<Interval>(intervals.begin(), intervals.begin() + i + 1);
		}
};

/*************************************************************************
    > File Name: CourseSchedule.cpp
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
		bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
		{
			vector<vector<int>> graph(numCourses, vector<int>{});
			vector<int> Indegree(numCourses);
			for(auto edge: prerequisites)
			{
				graph[edge[1]].push_back(edge[0]);
			}
			for(auto pair : graph)
				for(int Point : pair)
					Indegree[Point]++;
			for(int i = 0; i < numCourses; i++)
			{
				int startPoint = 0;
				for(; startPoint < numCourses; startPoint++)
					if(Indegree[startPoint] == 0)
						break;
				if(startPoint == numCourses)
					return false;
				Indegree[startPoint] = -1;
				for(int Point : graph[startPoint])
					Indegree[Point]--;
			}
			return true;			
		}
};
int main(void)
{
	return 0;
}

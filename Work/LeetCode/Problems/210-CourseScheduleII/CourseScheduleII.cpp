/*************************************************************************
    > File Name: CourseScheduleII.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		vector<int> findOrder(int numCourses, vector<vector<int>> & prerequisites)
		{
			vector<int> aResult;
			vector<vector<int> >aLUT(numCourses + 1);
			vector<int> aBlock(numCourses + 1, 0);
			for(int i = 0; i < prerequisites.size(); i++)
			{
				aLUT[prerequisites[i][1]].push_back(prerequisites[i][0]);
				aBlock[prerequisites[i][0]]++;
			}
			vector<int> aStack;
			aStack.reserve(numCourses);
			for(int i = 0; i < numCourses; i++)
				if(aBlock[i] == 0)
					aStack.push_back(i);
			while(!aStack.empty())
			{
				int aCourse = aStack.back();
				aStack.pop_back();
				aResult.push_back(aCourse);
				for(auto aUnblock : aLUT[aCourse])
				{
					if(--aBlock[aUnblock] == 0)
					{
						aStack.push_back(aUnblock);
					}
				}
			}
			if(aResult.size() < numCourses)
				aResult.clear();
			return aResult;
		}
};


int main(void)
{
	return 0;
}

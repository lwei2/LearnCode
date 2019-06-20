/*************************************************************************
    > File Name: MaxPointsonaLine.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

class Solution
{
	public:
		int maxPoints(vector<vector<int>>&points)
		{
			if(empty(points))
				return 0;
			int n = points.size();
			if(n < 3)
			{
				if(n == 2)
					return 2;
				return 1;
			}
			vector<int> tmp = points[0];
			int max = 2;
			for(int i = 1; i < points.size(); i++)
			{
				int count = 0;
				long x1 = tmp[0];
				long y1 = tmp[1];
				long x2 = points[i][0];
				long y2 = points[i][1];
				if(x1 == x2 && y1 == y2)
				{
					for(int j = 0; j < points.size(); j++)
					{
						if(x1 == points[j][0] && y1 == points[j][1])
							count++;
					}
				}
				else
				{
					for(int j = 0; j < points.size(); j++)
					{
						long x3 = points[j][0];
						long y3 = points[j][1];
						if(((y3-y2)*(x2-x1)) == ((y2-y1)*(x3-x2)))
						{
							count++;
						}
					}
				}
				tmp = points[i];
				max = std::max(max,count);
			}
			return max;
		}
};

int main(void)
{
	return 0;
}

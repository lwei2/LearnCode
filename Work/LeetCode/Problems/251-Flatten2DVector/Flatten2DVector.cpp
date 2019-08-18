/*************************************************************************
    > File Name: Flatten2DVector.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>

using namespace std;

class Vector2D
{
	public:
		Vector2D(vector<int>> &vec2d)
		{
			begin = vec2d.begin();
			end = vec2d.end();
			pos = 0;
		}
		int next()
		{
			hasNext();
			return (*begin)[pos++];
		}
		bool hasNext()
		{
			while(begin!=end && pos == (*begin).size())
				begin++,pos = 0;
			return begin != end;
		}
	private:
		vector<vector<int>>:;iterator begin, end;
		int pos;
};


int main(void)
{
	return 0;
}

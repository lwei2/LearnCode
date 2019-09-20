/*************************************************************************
    > File Name: Pro7.6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :在二维平面上，有一些点，请找出经过点数最多的那条线。

给定一个点集vector<point>p和点集的大小n,没有两个点的横坐标相等的情况,请返回一个vector<double>，代表经过点数最多的那条直线的斜率和截距。</double></point>
 ************************************************************************/


#include <iostream>

using namespace std;

struct Point
{
	int x;
	int y;
	Point():x(0),y(0)
	{

	}
	Point(int xx, int yy)
	{
		x = xx;
		y = yy;
	}
};

class DenseLine
{
	public:
		vector<double> getLine(vector<Point> p, int n)
		{
			map<pair<double,double>, int> lines;
			double k,b;
			for(int i = 0; i < n-1; i++)
			{
				for(int j = i+1; j < n; j++)
				{
					k = (p[j].y - p[i].y)/(p[j].x - p[i].x);
					b = p[i].y - k*p[i].x;
					pair<double, double> line(k,b);
					if(lines.find(line) == lines.end())
						lines[line] = 1;
					else
						lines[line]++;
				}
			}
			int most = 0;
			vector<double> res(2);
			for(auto it = lines.begin(); it != lines.end(); it++)
			{
				if(it->second > most)
				{
					res[0] = it->first.first;
					res[1] = it->first.second;
				}
			}
			return res;
		}
};


int main(void)
{
	return 0;
}

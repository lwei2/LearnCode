/*************************************************************************
    > File Name: Pro0058_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

bool inStandardRec(double x1, double y1, double x2, double y2, double x, double y)
{
	return x > x1 && x < x2 && y < y1 && y > y2;
}

bool inRec(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, double x, double y)
{
	float dis = sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4));
	float cos = (x3-x4)/dis;
	float sin = (y3-y4)/dis;
	return inStandardRec(x1*cos + y1*sin, y1*cos-x1*sin, x3*cos+y3*sin, y3*cos - x3*sin, x*cos + y*sin,y*cos - x*sin);
}

int main(void)
{
	vector<pair<double, double> > vec(5);
	for(int i = 0; i < 5; i++)
	{
		scanf("%lf",&vec[i].first);
		scanf("%lf",&vec[i].second);		
	}
	printf("%s", inRec(vec[0].first, vec[0].second, 
				vec[1].first, vec[1].second,
				vec[3].first, vec[3].second,
				vec[2].first, vec[2].second,
				vec[4].first, vec[4].second
				)?"Yes":"No");
	return 0;
}


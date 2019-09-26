/*************************************************************************
    > File Name: 8-17.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<math.h>

using namespace std;

class Point
{
	public:
		Point();
		Point(double x, double y);
	private:
		double x_axis;
		double y_axis;
		friend class Beeline;
};
class Beeline
{
	public:
		Beeline();
		Beeline(Point aa, Point bb);
		Beeline(double a_x, double a_y, double b_x, double b_y);
		double length();
	private:
		Point a;
		Point b;
};
Point::Point():x_axis(0), y_axis(0)
{

}
Point::Point(double x, double y):x_axis(x), y_axis(y)
{

}
Beeline::Beeline()
{
	a.x_axis = 0;
	a.y_axis = 0;
	b.x_axis = 0;
	b.y_axis = 0;
}
Beeline::Beeline(Point aa, Point bb):a(aa),b(bb)
{

}
Beeline::Beeline(double a_x, double a_y, double b_x, double b_y)
{
	a.x_axis = a_x;
	a.y_axis = a_y;
	b.x_axis = b_x;
	b.y_axis = b_y;
}
double Beeline::length()
{
	double length = 0;
	length = sqrt((a.x_axis - b.x_axis)*(a.x_axis - b.x_axis) + (a.y_axis - b.y_axis)*(a.y_axis - b.y_axis));
	return length;
}

int main(void)
{
	Beeline line(0,0,3,4);
	cout<<line.length()<<endl;
	return 0;
}

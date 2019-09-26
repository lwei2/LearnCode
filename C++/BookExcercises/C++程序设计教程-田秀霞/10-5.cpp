/*************************************************************************
    > File Name: 10-5.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Point
{
	private:
		int x;
		int y;
	public:
		Point(int xx =0, int yy = 0)
		{
			x = xx;
			y = yy;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		Point operator++();
};
Point Point::operator++()
{
	++x;
	++y;
	return *this;
}
int main(void)
{
	Point p(1,2);
	++p;
	cout<<"p.x ="<<p.getx()<<",p.y ="<<p.gety()<<endl;
	p.operator++();
	cout<<"p.x ="<<p.getx()<<",p.y ="<<p.gety()<<endl;
	return 0;
}

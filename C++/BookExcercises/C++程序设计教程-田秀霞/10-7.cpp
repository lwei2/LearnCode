/*************************************************************************
    > File Name: 10-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;


class Point
{
	public:
		Point(int xx=0, int yy=0)
		{
			x=xx;
			y=yy;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		friend Point operator++(Point &q);
	private:
		int x;
		int y;
};
Point operator++(Point &q)
{
	++q.x;
	++q.y;
	return q;
}

int main(void)
{
	Point p(1,2);
	++p;
	cout<<"p.x="<<p.getx()<<",p.y="<<p.gety()<<endl;
	operator++(p);
	cout<<"p.x="<<p.getx()<<",p.y="<<p.gety()<<endl;
	return 0;
}

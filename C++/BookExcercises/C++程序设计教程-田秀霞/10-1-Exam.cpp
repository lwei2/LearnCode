/*************************************************************************
    > File Name: 10-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>
#include<math.h>

using namespace std;

class Point
{
	protected:
		double xcoord, ycoord;
	public:
		Point(double x, double y):xcoord(x),ycoord(y)
		{
			
		}
		virtual ~Point()
		{

		}
		virtual double CalArea() const = 0;
};


class Rect:public Point
{
	protected:
		double xcoord1, ycoord1;
	public:
		Rect(double x, double y, double x1, double y1):Point(x,y)
		{
			xcoord1 = x1;
			ycoord1 = y1;
		}
		double CalArea()const
		{
			cout<<"Rect Area:"<<endl;
			return (xcoord1 - xcoord)*(ycoord1 - ycoord);
		}
};
class Circle: public Point
{
	protected:
		double r;
	public:
		Circle(double x, double y, double d):Point(x,y),r(d)
		{	
			
		}
		double CalArea() const
		{
			cout<<"Circle Area:"<<endl;
			return 3.14159*r*r;
		}
};
class Triangle: public Point
{
	double x1,x2,y1,y2;
	public:
		Triangle(double x, double y, double a, double b, double c, double d):Point(x,y),x1(a),y1(b),x2(c),y2(d)
	{

	}
		double CalArea()const;
};
double Triangle::CalArea() const
{
	double k,m,h,he;
	k = (y2-y1)/(x2-x1);
	m = -k*x1+y1;
	h = abs(k*xcoord - ycoord + m)/sqrt(k*k+1);
	he = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	cout<<"Triangle  Area:"<<endl;
	return h*he/2;
}

int main(void)
{
	Point *shp[3];
	shp[0] = new Rect(0,0,100.44,243);
	shp[1] = new Circle(24,56,100.0);
	shp[2] = new Triangle(17.6,11,30.5,20,25,39);
	int i;
	for(i = 0; i < 3; i++)
		cout<<"The area is"<<shp[i]->CalArea()<<endl;
	return 0;
}

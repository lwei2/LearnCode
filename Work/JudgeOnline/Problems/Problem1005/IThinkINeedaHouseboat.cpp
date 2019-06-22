/*************************************************************************
    > File Name: IThinkINeedaHouseboat.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

#define PI 3.1415926

struct Point
{
	double x;
	double y;
};

typedef struct Point Point;

int main(void)
{
	int N;
	Point p;
	int count = 1;
	cin>>N;
	while(N--)
	{
		cin>>p.x>>p.y;
		double area = PI*((p.x-0)*(p.x-0) + (p.y-0)*(p.y-0))/2;
		cout<<"Property "<<count++<<": This property will begin eroding in year "<<(int)((area/(double)50)+1)<<"."<<endl;
	}
	cout<<"END OF OUTPUT."<<endl;
	return 0;
}

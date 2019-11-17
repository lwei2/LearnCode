/*************************************************************************
    > File Name: 12-1-2.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

namespace ns2
{
	int i;
	class Data
	{
		public:
			Data(int x, int y, int z)
			{
				a = x;
				b = y;
				c = z;
			}
			void getdata();
		private:
			int a,b,c;
	};
	void Data::getdata()
	{
		cout<<"data1:"<<a<<",data2:"<<b<<",data3:"<<c<<endl;
	}
	double fun(double x, double y)
	{
		return (x-y)/2;
	}
};


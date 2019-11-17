/*************************************************************************
    > File Name: 12-1-1.h
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

namespace ns1
{
	int i;
	class Data
	{
		public:
			Data(int x, int y)
			{
				a = x;
				b = y;
			}
			void getdata();
		private:
			int a,b;
	};
	void Data::getdata()
	{
		cout<<"data1:"<<a<<",data2:"<<b<<endl;
	}
	double fun(double x, double y)
	{
		return (x+y)/2;
	}
	namespace Inner
	{
		void f()
		{
			i++;
		}
		void h();
	};
}
void ns1::Inner::h()
{
	i--;
}


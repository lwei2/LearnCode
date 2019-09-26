/*************************************************************************
    > File Name: 10-8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Date
{
	int month,day,year;
public:
	Date(int m = 0, int d = 0, int y = 0):month(m),day(d),year(y)
	{

	}
	Date operator++();
	Date operator--(int);
	void display()
	{
		cout<<month<<' '<<day<<' '<<year<<endl;
	}
};
Date Date::operator++()
{
	if(++month>12)
	{
		month -= 12;
		++year;
	}
	return *this;
}
Date Date::operator--(int)
{
	Date dt(*this);
	month--;
	if(month<=0)
	{
		month += 12;
		--year;
	}
	return dt;
}

int main(void)
{
	Date dt(12,18,2008);
	Date da;
	cout<<"dt:";
	dt.display();
	da=++dt;
	cout<<"da=++dt"<<endl;
	cout<<" da:";
	da.display();
	cout<<" dt:";
	dt.display();
	da=dt--;
	cout<<"da=dt--"<<endl;
	cout<<" da:";
	da.display();
	cout<<" dt:";
	dt.display();
	return 0;
}

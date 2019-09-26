/*************************************************************************
    > File Name: 8-2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Date
{
	public:
		int year;
		int month;
		int day;		
};


int main(void)
{
	Date d;
	cout<<"Enter the time:"<<endl;
	cin>>d.year;
	cin>>d.month;
	cin>>d.day;
	cout<<"Year:"<<d.year;
	cout<<"Month:"<<d.month;
	cout<<"Day:"<<d.day;
	cout<<endl;

	return 0;
}

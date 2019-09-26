/*************************************************************************
    > File Name: 8-3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

class Date
{
	public:
		void input();
		void output();
	private:
		int year;
		int month;
		int day;
};
void Date::input()
{
	cout<<"Enter :";
	cin>>year;
	cin>>month;
	cin>>day;
}
void Date::output()
{
	cout<<year<<"year";
	cout<<month<<"month";
	cout<<day<<"day"<<endl;
}
int main(void)
{
	Date d;
	d.input();
	d.output();
	return 0;
}

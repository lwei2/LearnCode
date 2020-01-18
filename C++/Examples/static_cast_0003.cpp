/*************************************************************************
    > File Name: static_cast_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int books, months;
	double booksPerMonth;
	cout<<"How many books do you plan to read?";
	cin>>books;
	cout<<"How many months will it take you to read them?";
	cin>>months;
	booksPerMonth = static_cast<double>(books)/months;
	cout<<"That is "<<booksPerMonth<<" books per month.\n";
	return 0;
}

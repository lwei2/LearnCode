/*************************************************************************
    > File Name: test_0010.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int year;
	cout<<"Enter the year:";
	cin>>year;
	if(year%4 == 0 && year%100 == 0)
	{
		if(year%400 == 0)
			cout<<year<<"is Y"<<endl;
		else
			cout<<year<<"is N"<<endl;
	}
	else
		cout<<year<<"is N"<<endl;
	return 0;	
}

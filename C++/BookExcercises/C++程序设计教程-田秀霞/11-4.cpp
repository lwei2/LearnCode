/*************************************************************************
    > File Name: 11-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char ch0[30],ch1[30],ch2[40];
	cout<<"1.ch0:";
	cin>>ch0;

	cout<<"2.ch1:";
	cin.getline(ch1, 30);

	cout<<"3.ch2:";
	cin.getline(ch2, 40, '*');
	cout<<endl;

	cout<<"ch0:"<<ch0<<endl;
	cout<<"ch1:"<<ch1<<endl;
	cout<<"ch2:"<<ch2<<endl;
	return 0;
}

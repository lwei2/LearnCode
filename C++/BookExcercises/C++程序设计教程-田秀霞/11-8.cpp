/*************************************************************************
    > File Name: 11-8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
	cout.fill('*');
	cout.width(10);
	cout<<255<<endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout<<255<<endl;
	cout.unsetf(ios::hex);

	cout.setf(ios::left);
	cout<<255<<endl;
	cout.unsetf(ios::left);

	cout.width(10);
	cout.setf(ios::showpos);
	cout.setf(ios::internal);
	cout<<255<<endl;
	cout.unsetf(ios::showpos);

	cout<<123.456782<<endl;
	cout.precision(8);
	cout<<123.456782<<endl;
	cout.setf(ios::scientific);
	cout.precision(6);
	cout<<123.456782<<endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout<<123.4567<<endl;

	return 0;
}

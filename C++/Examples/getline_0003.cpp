/*************************************************************************
    > File Name: getline_0003.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char ch1, ch2[10];
	cout<<"Enter the string:"<<endl;
	cin.getline(ch2,6);
	cin>>ch1;
	cout<<ch2<<endl;
	cout<<ch1<<endl<<(int)ch1<<endl;
	return 0;
}

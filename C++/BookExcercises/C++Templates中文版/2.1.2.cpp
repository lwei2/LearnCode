/*************************************************************************
    > File Name: 2.1.2.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include "max.hpp"
using namespace std;


int main(void)
{
	int i = 42;
	cout<<"max(7,i):"<<::max(7,i)<<endl;
	double f1 = 3.4;
	double f2 = -6.7;
	cout<<"max(f1,f2):"<<::max(f1,f2)<<endl;
	string s1 = "mathematics";
	string s2 = "math";
	cout<<"max(s1,s2):"<<::max(s1, s2)<<endl;
	return 0;
}



/*************************************************************************
    > File Name: 2-8.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a = 5; int b = 10;
	cout<<(a>4?a+7:b-5)<<endl;
	cout<<(a<4?a+7:b-5)<<endl;
	cout<<(a+b>16?a+7:b-5?a+10:b+6)<<endl;
	return 0;
}

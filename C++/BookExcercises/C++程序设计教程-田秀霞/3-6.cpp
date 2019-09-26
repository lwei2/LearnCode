/*************************************************************************
    > File Name: 3-6.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,sum=0;
	for(n = 1; n <= 100; n++)
		sum = sum + n;
	cout<<"1+2+...+100="<<sum<<endl;
	return 0;
}

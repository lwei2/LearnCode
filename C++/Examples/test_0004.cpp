/*************************************************************************
    > File Name: test_0004.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int c[4] = {
		1,2,3,4
	};
	int *a[4];
	int (*b)[4];
	b = &c;
	for(int i = 0; i < 4; i++)
		a[i] = &c[i];
	cout<<*a[1]<<endl;
	cout<<(*b)[2]<<endl;
	return 0;
}

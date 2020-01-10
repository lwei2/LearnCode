/*************************************************************************
    > File Name: test_0011.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	unsigned int n;
	unsigned long long factorial = 1;
	cout<<"Enter n:";
	cin>>n;
	for(int i = 1; i <= n; ++i)
		factorial *= i;
	cout<<"n^n="<<factorial<<endl;
	return 0;
}

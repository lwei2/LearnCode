/*************************************************************************
    > File Name: test_0009.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n,sum = 0;
	cout<<"Enter n:";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		sum += i;
	}
	cout<<"Sum="<<sum<<endl;

	return 0;
}

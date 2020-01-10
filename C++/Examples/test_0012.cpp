/*************************************************************************
    > File Name: test_0012.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int rows;
	cin>>rows;
	for(int i = 1; i <= rows; ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}

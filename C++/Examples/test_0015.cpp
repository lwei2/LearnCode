/*************************************************************************
    > File Name: test_0015.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int space, rows;
	cin>>rows;
	for(int i = 1, k = 0; i <= rows; ++i, k = 0)
	{
		for(space = 1; space <= rows - i; ++space)
		{
			cout<< " ";
		}
		while(k != 2*i - 1)
		{
			cout<< "* ";
			++k;
		}
		cout<<endl;
	}
	return 0;
}

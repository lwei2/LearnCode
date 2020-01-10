/*************************************************************************
    > File Name: test_0017.cpp
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
	for(int i = rows; i >= 1; --i)
	{
		for(int j = 0; j < rows - i; ++j)
			cout<< "  ";
		for(int j = i; j <= 2*i - 1; ++j)
			cout<< "* ";
		for(int j = 0; j < i - 1; ++j)
			cout<< "* ";
		cout<<endl;

	}
	return 0;
}

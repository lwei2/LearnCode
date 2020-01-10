/*************************************************************************
    > File Name: test_0013.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	char input, alphabet = 'A';
	cout<<"Enter alphabet:";
	cin>>input;
	for(int i = 1; i <= (input - 'A' + 1); ++i)
	{
		for(int j = 1; j <= i; ++j)
		{
			cout<<alphabet<<" ";
		}
		++alphabet;
		cout<<endl;
	}
	return 0;
}

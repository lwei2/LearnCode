/*************************************************************************
    > File Name: 3-9.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int i,j,k;
	for(i = 1; i <= 6; i++)
	{
		for(j = 1; j <= 6-i; j++)
			cout<<" ";
		for(k = 1; k <= 2*i-1; k++)
			cout<<"%";
		cout<<endl;
	}
	for(i = 5; i >= 1; i--)
	{
		for(j = 1; j <= 6-i; j++)
			cout<<" ";
		for(k = 1; k <= 2*i - 1; k++)
			cout<<"%";
		cout<<endl;
	}
	
	return 0;
}

/*************************************************************************
    > File Name: Pro1001.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :Sum Problem
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	int n;
	while(cin>>n)
	{
		int sum = 0;
		for(int i = 1; i <= n; i++)
			sum += i;
		cout<<sum<<endl<<endl;
	}
	return 0;
}

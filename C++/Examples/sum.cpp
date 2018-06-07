/*************************************************************************
    > File Name: sum.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description: 输入一个数，并不断累加
 ************************************************************************/

#include<iostream>
using namespace std;

int main(void)
{
  	int sum = 0;
	int val = 0;
	cout<<"Please input a number:"<<endl;
	while(cin>>val)
	{
		sum+=val;
		cout<<"Please input next number:"<<endl;
	}
	cout<<"The sum of all number is sum = "<<sum<<endl;

	return 0;
}

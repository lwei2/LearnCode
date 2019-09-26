/*************************************************************************
    > File Name: 3-4.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int count, identity;
	float price, total;
	cout<<"Enter the count and price:"<<endl;
	cin>>count>>price;
	cout<<"Enter the identity:"<<endl;
	cin>>identity;
	if(identity == 1)
	{
		total = count*price*0.7;
	}
	else if(identity == 2)
	{
		total = count * price *0.75;
	}
	else if(identity == 3)
	{
		total = count * price *0.8;
	}
	else if(identity == 4)
	{
		total = count * price *0.9;
	}
	else
		total = count * price;
	cout<<"total:"<<total<<endl;
}

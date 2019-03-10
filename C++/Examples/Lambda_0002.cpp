/*************************************************************************
    > File Name: Lambda_0002.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/

#include<iostream>

using namespace std;

int main(void)
{
	int x = 100,y=200,z=300;
	auto ff = [=,&y,&z](int n){
		cout<<x<<endl;
		y++;z++;
		return n*n;
	};
	cout<<ff(15)<<endl;
	cout<<y<<","<<z<<endl;
	return 0;
}

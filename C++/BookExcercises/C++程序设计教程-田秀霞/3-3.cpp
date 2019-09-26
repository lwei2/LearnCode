/*************************************************************************
    > File Name: 3-3.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a,b,c,min;
	cin>>a>>b>>c;
	if(a<b)
		min = a;
	else
		min =b;
	if(c < min)
		min = c;
	cout<<a<<","<<b<<","<<c<<endl;
	cout<<"min:"<<min<<endl;
	return 0;
}

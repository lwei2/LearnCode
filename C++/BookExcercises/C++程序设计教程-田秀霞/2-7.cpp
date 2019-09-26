/*************************************************************************
    > File Name: 2-7.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int a =7,b = 18,c =9,x,y;
	x = (b>c&&b<=a);
	cout<<"x="<<x<<endl;
	x=(a||b+c&&b-c);
	cout<<"x="<<x<<endl;
	x=!(a>b&&!c||'a');
	cout<<"x="<<x<<endl;
	x=(!(a+b)+c-1&&b+c/2);
	cout<<"x="<<x<<endl;
	!(x=a)&&(y=b)&&'\0';
	cout<<"x="<<x<<"\ty="<<y<<endl;
	'\0'||(y=b)||(x=8);
	cout<<"x="<<x<<"\ty="<<y<<endl;


	return 0;
}

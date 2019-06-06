/*************************************************************************
    > File Name: Pro1030.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include<iostream>

#include<cmath>

using namespace std;

int main()

{

	int front,back;

	while(cin>>front>>back)
	{

       int lay_front = (int)ceil(sqrt((double)front));
       int lay_back = (int)ceil(sqrt((double)back));
       int right_front = (front-(lay_front-1)*(lay_front-1)-1)/2+1;
       int right_back = (back-(lay_back-1)*(lay_back-1)-1)/2+1;
       int left_front = (lay_front*lay_front-front)/2+1;
       int left_back = (lay_back*lay_back-back)/2+1;
       cout<<abs(lay_front-lay_back)+abs(right_front- right_back)+abs(left_front-left_back)<<endl;
       }
	return 0;
}

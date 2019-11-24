/*************************************************************************
    > File Name: 11-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
	float a,b,c,disc;
	for(int i = 0; i < 3; i++)
	{
		cout<<"Please input a,b,c:";
		cin>>a>>b>>c;
		if(a == 0)
		{
			cerr<<"a cannot be zero!"<<endl;
		}
		else
			if((disc = b*b-4*a*c) < 0)
			{
				cerr<<"b*b-4*a*c cannot beg smaller than zero, no solution!"<<endl; 
			}
			else
			{
				cout<<"x1="<<(-b+sqrt(disc))/(2*a)<<endl;
				cout<<"x2="<<(-b-sqrt(disc))/(2*a)<<endl;
			}
	}
	return 0;
}

/*************************************************************************
    > File Name: 3-1-Exam.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int n;
	do{
		cout<<"Enter the year";
		cin>>n;
		if(n <= 0)
		{
			cout<<"the year is wrong!";
			break;
		}
		if(n > 0 && n < 10)
			cout<<"child";
		else if(n < 20)
			cout<<"child is 20";
		else if(n < 30)
			cout<<"child is 30"
		else if(n < 50)
			cout<<"child is 50";
		else if(n >= 50)
			cout<<"child is bigger than 50";
		cout<<endl;
	}while(n < 200);
	return 0;
}

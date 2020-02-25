/*************************************************************************
    > File Name: Pro1034_1.cpp
    > Author: lwei2
    > Mail: lwei2@IT.com 
    > The Description :
 ************************************************************************/


#include <iostream>

using namespace std;

int main(void)
{
	int y,m,d;
	int sum = 0;
	int year[13] = {
		0,31,28,31,30,31,30,31,31,30,31,30,31
	};
	cin>>y>>m>>d;
	if(y%100 != 0)
	{
		if(y%4 == 0)
			year[2] = 29;
	}
	else
	{
		if(y%400 == 0)
			year[2] = 29;
	}
	for(int i = 1; i < m; i++)
		sum = sum + year[i];
	cout<<sum+d<<endl;
	return 0;
}
